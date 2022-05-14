
#ifndef __TESTNGPP_TEST_FIXTURE_RUNNER_H__
#define __TESTNGPP_TEST_FIXTURE_RUNNER_H__

#include <string>

#include <testngpp/testngpp.h>
#include <testngpp/utils/StringList.h>

TESTNGPP_NS_START

struct TestFixtureContext;
struct TestFixtureResultCollector;
struct TestHierarchyRunner;
struct TestCaseFilter;
struct TestFixtureRunnerImpl;

struct TestFixtureRunner
{
   TestFixtureRunner(TestHierarchyRunner* runner);
   ~TestFixtureRunner();

   void run ( TestFixtureContext *
            , TestFixtureResultCollector*
            , const TestCaseFilter*
            , const std::string&
            , const StringList&);

private:
   TestFixtureRunnerImpl* This;
};

TESTNGPP_NS_END

#endif

