
		testngpp2 --- A C/C++ Testing Framework
		-------------------------------------
		https://github.com/sinojelly/testngpp2
		https://gitee.com/sinojelly/testngpp2


testngpp2是基于testngpp演进来的一个轻量级、运行环境简单的测试框架，支持把所有TestSuite编译到一个可执行文件。

testngpp和testngpp2相比，测试用例写法，用例管理方式都是保持一致的，只是改变了编译运行方式，简化了编译运行环境：
| 特性   | testngpp | testngpp2  | 改进成testngpp2的原因 |
| --    | --       | --         | --                    | 
| 编译   | 每个测试.h文件内容<br>编译成一个so | 可以任意多个测试.h文件内容<br>编译到一个可执行文件 | 更好的使用并行编译加速 |
| 运行  | 测试工具是可执行文件,<br>动态加载listener和<br>各个TestSuite的so | 直接运行可执行文件即可 |①可执行文件运行可靠性更高;<br>②对不同平台的动态库加载机制依赖较少,<br>更容易跨平台(比如支持Android+Termux环境);<br>③运行命令简单，可以不加任何命令行参数;<br>④静态链接testngpp2.a，不是使用可执行文件或so，<br>相同架构机器不同编译器版本可能复用 |

相比testngpp，目前精简去掉了一些功能：
- Sandbox运行机制
- 文件句柄等资源泄露检查,它与平台紧密相关(独立的内存泄露检查是保留的)
- xml文件输出(该功能目前未使用，所以没有测试)


## testngpp2 features

|OS|Compiler|Base function①| Memory leak check | Parameterized test |
|----|----  |----         |----     |----          |
|Linux|GCC  |Yes          |Yes      | Yes          |
|Win10|MinGW②|Yes          |No       | Yes          |
|Win10|VS2019|Yes         |Yes      | Yes          |
|Android③|Clang|Yes       |Yes      | Yes          |
注:
① Base function包括：用例编写(包括tag,用例依赖)、用例管理(包括运行时过滤fixture/tag)等。
② MinGW可靠性较差，比如.a rename fail, .cpp的函数实现无法链接等，不适合开发大的项目。
③ Android+Termux，也可以使用VHEditor。

## testngpp2基本概念
testngpp2用例编译运行流程如下：
![](images/testngpp2-compile-run-procedure.PNG)
注：
可执行文件名 Tests 用户可自定义。

**几个主要的概念：**
- **TestSuite**: 一个测试.h文件，就是一个TestSuite。
- **TestFixture**: 测试用例中用 FIXTURE(TestFixtureName)声明的一个用例集合， 它组织了若干相关的用例，这些用例可以共享一些成员变量。一个TestSuite中可以有多个TestFixture。
- **TestCase**: TestFixture中的每个用例都是一个TestCase。
- **SETUP,TEARDOWN**: 每个TestFixture可以有 SETUP, TEARDOWN方法，在每个用例运行前会执行SETUP,每个用例运行结束执行TEARDOWN。

## testngpp2命令行
一般直接运行编译生成的可执行文件即可。
如果希望只运行部分测试用例，或者定制输出格式，则需要了解命令行参数。

testngpp2命令行说明：
```shell
Tests [--filter-fixtures <fixture name>]...
      [--filter-tags     <tag>]
      [-o <output> [-c] [-s] [-f] [-t] [-v] [-l <output level>]] 
      [-m]
```
执行 Tests -h 就可以查看上述帮助信息。命令行参数分为如下几类：

**用例选择**: 选择要运行的用例，默认运行全部用例。
- --filter-fixtures : 后面跟TestFixture名称，可以用*通配符，可以用多个--filter-fixtures <fixture name> 指定多个Fixture。
- --filter-tags : 后面跟Tag名称，标记相应Tag的用例才会执行。

**输出配置**: 配置输出参数。 
- -o stdout : 输出到屏幕。后面还可以带如下参数：
   - -c  : colourful
   - -s  : show suite name
   - -f  : show suite name and fixture name
   - -t  : show tags
   - -v  : show verbose info
   - -l level : set output level (0 ~ 3) 其中 level具体含义如下：
     - error/failure   -    always output
     - info            -    level 0   (output when level <= 0)
     - warning         -    level 1   (output when level <= 1)
     - skipped         -    level 2   (output when level <= 2)
- -o xml:file : 输出到xml （使用较少，暂未支持）

默认输出配置是：-o stdout -c -v

**运行配置**: 配置运行时参数。
- -m : 关闭内存泄露检查。

## 用例编写方法

### 简单样例 ###
``` c++
    TEST(测试: 1+1 = 2)
    {
        ASSERT_EQ(2, 1+1);
    }
```
常用的判断执行结果的宏有：
``` c++
ASSERT_TRUE(expr) 
ASSERT_FALSE(expr) 
ASSERT_EQ(expected, value)
ASSERT_NE(expected, value)
ASSERT_DBL_EQ(expected, value)
ASSERT_DBL_NE(expected, value)
ASSERT_THROWS(expr, except)
ASSERT_THROWS_ANYTHING(expr)
ASSERT_THROWS_NOTHING(expr)
ASSERT_THROWS_EQ(expr, except, expected, value) // 执行expr后应该抛出except异常，并且expected与value相等
ASSERT_SAME_DATA(addr1, addr2, size) 
ASSERT_DELTA(x, y, d) // x与y的差小于d
```
这些宏都有对应的EXPECT版本（把ASSERT改为EXPECT即可），它与ASSERT版本的差异是：判断失败，该用例仍然继续执行。

### 使用Do-Cleanup避免资源泄漏 ###
把资源清理代码写在Cleanup中。
``` c++
    TEST(__DO__/__CLEANUP__/__DONE__)
    {
        __DO__
            FAIL("I'm gonna fail");
            WARN("I should not be shown");
        __CLEANUP__
            INFO("I should be shown always");
        __DONE__
    }
```

### 使用Annotation ###
##### 使用id给用例起名字 #####
``` c++
    // @test(id=face-to-south)
    TEST(robot should face to south after turn right)
    {
       robot.turnRight();
       ASSERT_TRUE(robot.faceToSouth());
    }
```

##### 使用depends设置用例的依赖关系 #####
``` c++
    // @test(id=face-to-west, depends=face-to-south)
    TEST(robot should face to west after another turn right)
    {
       robot.turnRight();
       ASSERT_TRUE(robot.faceToWest());
    }
```

##### 使用tags设置Fixture/TestCase的标签 #####
> 标签的作用：在testngpp-runner.exe运行命令行中，通过-f pattern来指定运行哪些用例。
> 多个标签用空格隔开。
``` c++
    // @fixture(tags="ft something")
    FIXTURE(RobotTest)
    {
        // @test(tags="ut slow")
        TEST(robot should face to west after another turn right)
        {
             robot.turnRight();
             ASSERT_TRUE(robot.faceToWest());
        }
    };
```

##### 使用memcheck设置Fixture/TestCase是否进行内存泄漏检查 #####
``` c++
//@fixture(memcheck=on)
FIXTURE(TestFixtureMemCheckOnAnnotation)
{
   TEST(fixture has been set to memcheck on, its tests all memcheck on)
   {
       char *p = new char; // should fail     
   }

   //@test(memcheck=off)
   TEST(fixture has been set to memcheck on, its test can use memcheck off to close mem leak check)
   {
        char *p = new char; // should success
   }
};
```

##### 使用data进行参数化测试 #####
参数化测试，是通过DATA\_PROVIDER提供多组参数，每一组参数传入用例，就成了一个可运行的用例。

下面这个简单的用例，因为有三组数据，所以它执行时会运行三个用例。

这种测试方法非常适合于 一个测试方法，有多组输入数据时，可以构成多个用例的情况。
``` c++
FIXTURE(DataDrivenTest)
{
	DATA_PROVIDER( mydata, 3
		, DATA_GROUP(1, 2, 3) 
		, DATA_GROUP(77, 20, 97) 
		, DATA_GROUP(101, 503, 604));

	// @test(data="mydata")
	PTEST( (int a, int b, int c), this is a parameterized test)
	{
		ASSERT_EQ(c, add(a, b));
	}
};
```
## 编译系统说明
- build.bat /.sh
  - 编译并运行samples程序。
  - samples是用testngpp2写的一些样例，因为历史原因，用例风格有多种，建议参考TestMemLeak.h中的testngpp风格。
  - 参考samples/CMakeLists.txt即可配置一个产品项目的测试工程。
- build_install.bat / .sh
  - 编译并安装，请先修改安装路径。
- build_test.ps1 /.sh
  - 编译并运行testngpp2的测试用例。
  - testngpp2的测试用例仍然用testngpp写成，并且使用到mockcpp。

Email to the current maintainers may be sent to
<sinojelly@163.com>.
