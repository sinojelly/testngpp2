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
- [ ] 写一个sample工程，使得构建脚本最小化。

- [ ] fixture filter看起来支持:分隔，还未测试。tag filter暂未测试。
- [ ] python解析和处理测试.h文件时，针对FIXTURE和TEST后面{未换行的情况作编译报错，或者作兼容处理。
- [ ] 如果开启mem checker，则用例执行结束，没有汇总的测试报告出来。(SimpleTestCaseRunner::run)
- [ ] xml output未支持。
- [ ] 确认xml, stdout输出切换命令，不用加载so的方式。
- [ ] 支持BDD类型的测试。

- [x] Linux下编译运行。
- [x] filter fixtures 可能不支持多个 -f 选项.
- [x] 写一个用法的帮助文档。
- [x] 如果只是删除生成的cxx，而构建结果临时文件未删除，则不会自动生成cxx。最终报错 AllTestSuites.cxx文件找不到。(即使修改.h也不会生成, 自定义命令OUTPUT增加AllTestSuites.cxx即可)
- [x] 支持自动搜索测试用例 .h 文件。
- [x] Listener的类型和选项未传入。
- [x] listener相关参数均为空。
- [x] filter tags 需要测试.
- [x] 增加一个全局选项，替代掉 -l listener 以及它的参数。
- [x] findSymbol重复，且不支持linux平台。需重构。
- [x] 当前 TestXXX.cxx 和 AllTestSuites.cxx 都不能在没有修改时，保持原来修改时间。会影响增量编译。(可能cmake已处理，依赖的.h未变，则不生成cxx; 如果.h改变则重新生成。)
- [x] 增加到cmakelist的自动生成testsuites cxx文件的命令，可能不能正常工作。(如果文件已存在才能工作)

- [x] 利用原来的编译脚本，把新的项目编译通过。
- [x] 简化CMakeList.txt, 直接添加cpp文件到一个CMakeList.txt。
- [x] 编译成可执行文件，运行看是否异常。
- [x] 带上-l listener参数，可以打印信息; 带上 test dll 路径(正确与否随意)，可以找到已编译进exe的__testngpp_test_suite_desc_getter函数，从而读取编译进exe的唯一的testsuite并运行它。
- [x] 把所有测试cpp文件编译进exe，并且把它们的suite名称(cpp文件名)注册到一个表。
- [x] 修改python script在生成测试cpp的同时，生成所有测试列表的文件。
  - [x] python脚本 -d 指定生成文件所在目录
  - [x] 生成的 cpp 文件名, 增加前缀 prefix_，其中prefix可以用 -p prefix 选项指定。
  - [x] 在-d 指定的目录生成 AllTestSuites.cpp 文件.
- [x] 研究用例运行的触发机制，之前通过load so触发，现在要自动把用例列表弄出来。原来通过命令行参数中的每个suite so加载触发用例运行。
- [x] 用直接编译成可执行文件方式运行sample程序。
- [x] 先改testngpp所有cpp链接成一个.a，作为被测对象。
- [x] 然后改 testngppst 支持编译成一个可执行文件，从而运行测试。
- [x] 重构目录，把不同平台对应的实现分开。便于在构建脚本中管理。(不同平台差异较小，估计不需要改多少)
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

static const std::vector<std::string> __all_test_suites{
    "sample"
};

extern "C" const std::vector<std::string>& ___testngpp_get_all_test_suites() {
   return __all_test_suites;
}

```

## 概念
### Test Suites
每个 TestXXX.h 自动生成 一个 ut_TestXXX.cxx，它就是一个 Test Suite.

### 命令行
#### testngpp runner命令行参数
```
testngpp-runner.exe [options]

Use options to show this help list:
   -h                        : show this help list

Use options to control output:
   -o stdout[-c-s-f-t-v-l3]  : output to standard output
or
   -o xml:path/to/file       : output to specified xml file
The meanings of stdout sub-options are:
   -c                        : colourful
   -s                        : show suite name
   -f                        : show suite name and fixture name
   -t                        : show tags
   -v                        : show verbose info
   -l level                  : set output level (0 ~ 3)
The default output is: -o stdout-c-v. 

Use options to control running testcase scope:
   -f pattern                : filter patterns 
   -t pattern                : tags filter pattern

Use options to control function:
   -m                        : not use memory leak checker
```
#### testngppgen命令行参数:
```
testngppgen [-e encoding] -d target_dir -p prefix testsuite1.h
```
自动在 target_dir 生成:
prefix_testsuit1.cpp

测试命令:
python D:\Develop\projects\test_tools\testngpp2\scripts\testngppgen.py -e utf-8 -d D:\Develop\projects\test_tools\testngpp2\build_sample2 D:\Develop\projects\test_tools\testngpp2\samples\TestBar.h D:\Develop\projects\test_tools\testngpp2\samples\TestMemLeak.h
发现这个命令会生成一个 TestMemLeak.cpp 和 TestBar.cxx，后者包含了两个.h的测试用例。(.cxx是汇总所有suite的文件,只有它导出了___testngpp_test_suite_desc_getter_TestMemLeak)
为了避免多个suite合并，可以用 -d 参数指定目录，但是只传一个测试 .h 文件。它会自动生成一个cxx文件，导出的符号带有suite name。
还需要考虑如何把 prefix 加上去。加到 suite name里面。
并且把 suite name 加到 AllTestSuites 列表，如果该列表有更新，则写文件，否则不写文件。

prefix 需要能成为 c++ 的标识符，可以用字母和下划线。

python.exe D:/Develop/test_tools/testngpp2/scripts/testngppgen.py -d D:/Develop/test_tools/testngpp2/gen_testsuites -p ut_ D:/Develop/test_tools/testngpp2/samples/TestBar.h

### 注意事项:
- test fixture表始终在item最后加一个0元素，避免数组元素个数是0的时候出错。我们用vector则不存在此问题，而且构造时初始化参数，不用一个一个add。新的c++真的好用很多。
