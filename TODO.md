# 计划做的事情

## 目标
### 1. 简化编译工程， 加快编译速度
- 编译时，针对每个cpp测试文件生成一个so。(链接次数多，耗时长，而且很难并行 make -j 也不能起作用)
- 编译的 CMakeList.txt 较复杂。
- 之前修改被测cpp，可能不能重新编译测试的so。

### 2. 简化运行命令， 方便运行和调试
- 运行时需要较多参数，新手会觉得困难

### 3. 改进运行可靠性, 支持更多平台使用
- 当前运行时可能遇到so无法加载, 虽然经优化已经好转。
- Android上部分so加载不成功。
- 动态库移到其它编译环境(如编译器版本)很可能不能运行，而静态库可以用的可能性大一些。

### 打算做成这样:
- 编译所有 cpp 测试文件 并链接 libtestngpp.a 生成一个测试文件。

## 任务
- [x] 利用原来的编译脚本，把新的项目编译通过。
- [x] 简化CMakeList.txt, 直接添加cpp文件到一个CMakeList.txt。
- [x] 编译成可执行文件，运行看是否异常。
- [x] 带上-l listener参数，可以打印信息; 带上 test dll 路径(正确与否随意)，可以找到已编译进exe的__testngpp_test_suite_desc_getter函数，从而读取编译进exe的唯一的testsuite并运行它。
- [ ] 增加一个全局选项，替代掉 -l listener 以及它的参数。
- [ ] 把所有测试cpp文件编译进exe，并且把它们的suite名称(cpp文件名)注册到一个表。
- [ ] findSymbol重复，且不支持linux平台。需重构。
- [ ] 修改python script在生成测试cpp的同时，生成所有测试列表的文件。
  - [x] python脚本 -d 指定生成文件所在目录
  - [ ] 生成的 cpp 文件名, 增加前缀 prefix_，其中prefix可以用 -p prefix 选项指定。
  - [ ] 在-d 指定的目录生成 AllTestSuites.cpp 文件.
- [ ] 研究用例运行的触发机制，之前通过load so触发，现在要自动把用例列表弄出来。原来通过命令行参数中的每个suite so加载触发用例运行。
- [ ] 用直接编译成可执行文件方式运行sample程序。
- [ ] 确认xml, stdout输出切换命令，不用加载so的方式。
- [ ] 先改testngpp所有cpp链接成一个.a，作为被测对象。
- [ ] 然后改 testngppst 支持编译成一个可执行文件，从而运行测试。
- [ ] 重构目录，把不同平台对应的实现分开。便于在构建脚本中管理。
- [ ] python解析和处理测试.h文件时，针对FIXTURE和TEST后面{未换行的情况作编译报错，或者作兼容处理。
- [ ] 支持BDD类型的测试。

- [x] 确认ResourceCheckPoint是否还需要，不需要去掉。(可能检查文件关闭方面有用)
- [x] 确认Sandbox是否需要，不需要去掉。

## 调试脚本
```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(Windows) 启动",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/src/Debug/testngpp-runner.exe",
            "args": ["${workspaceFolder}/build/src/Debug/mockcpp-ut-TestAny.dll", "-l\"testngppstdoutlistener -c -v\"", "-m"],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "console": "externalTerminal"
        },
        {
            "name": "Python: 当前文件",
            "type": "python",
            "request": "launch",
            "program": "${file}",
            "console": "integratedTerminal",
            "args":[
                "-e", "utf-8",
                "-o", "D:/Develop/test_tools/testngpp2/build_sample/sample.cpp",
                "D:/Develop/test_tools/testngpp2/samples/TestFoo.h"
            ]
        }
    ]
}
```

## AllTestSuites.cpp 内容

```
#include <vector>
#include <string>

static const std::vector<std::string> __testngpp_all_test_suites{
    "sample"
};

extern "C" const std::vector<std::string>& ___testngpp_get_all_test_suites() {
   return __testngpp_all_test_suites;
}

```

## 概念
### Test Suites
每个 TestXXX.h 自动生成 一个 ut-TestXXX.cpp，它就是一个 Test Suite.

### 命令行
```
testngppgen [-e encoding] -d target_dir -p prefix testsuite1.h testsuite2.h ...
```
自动在 target_dir 生成:
prefix_testsuit1.cpp
prefix_testsuit2.cpp

测试命令:
python D:\Develop\projects\test_tools\testngpp2\scripts\testngppgen.py -e utf-8 -d D:\Develop\projects\test_tools\testngpp2\build_sample2 D:\Develop\projects\test_tools\testngpp2\samples\TestBar.h D:\Develop\projects\test_tools\testngpp2\samples\TestMemLeak.h
发现这个命令会生成一个 TestMemLeak.cpp 和 TestBar.cxx，后者包含了两个.h的测试用例。
为了避免多个suite合并，可以用 -d 参数指定目录，但是只传一个测试 .h 文件。

### 注意事项:
- test fixture表始终在item最后加一个0元素，避免数组元素个数是0的时候出错。
