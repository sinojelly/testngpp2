
#include <iostream>

#include <testngpp/internal/TestCase.h>

#include <testngpp/listener/TestFixtureResultCollector.h>

#include <testngpp/runner/SimpleTestHierarchyRunner.h>
#include <testngpp/runner/TestHierarchyHandler.h>
#include <testngpp/runner/TestCaseRunner.h>
#include <testngpp/runner/TestCaseFilter.h>

TESTNGPP_NS_START

///////////////////////////////////////////////////////
struct SimpleTestHierarchyRunnerImpl 
{
	SimpleTestHierarchyRunnerImpl(TestCaseRunner* runner)
      : caseRunner(runner)
   {}

	void run(TestHierarchyHandler* hierarchy
      , TestFixtureResultCollector* resultCollector
      , const StringList& specifiedTestcases);

   TestCaseRunner* caseRunner; // X
};

///////////////////////////////////////////////////////
void
SimpleTestHierarchyRunnerImpl::run(TestHierarchyHandler* hierarchy
        , TestFixtureResultCollector* resultCollector
        , const StringList& specifiedTestcases)
{
   for(unsigned int i = 0; i < hierarchy->numberOfTestCasesInSched(); i++)
   {
      TestHierarchyHandler::ValueType test = hierarchy->getTestCase(i);
      TestCase* testcase = const_cast<TestCase*>(test.first);
       // run all tests, or specified tests
      if (specifiedTestcases.size() == 0 || specifiedTestcases.contains(testcase->getName())) {
          bool result = caseRunner->run(testcase, resultCollector, test.second);
          hierarchy->testDone(testcase, result);
      }
   }
}

///////////////////////////////////////////////////////
SimpleTestHierarchyRunner::
SimpleTestHierarchyRunner(TestCaseRunner* caseRunner)
   : This(new SimpleTestHierarchyRunnerImpl(caseRunner))
{
}

///////////////////////////////////////////////////////
SimpleTestHierarchyRunner::~SimpleTestHierarchyRunner()
{
   delete This;
}

///////////////////////////////////////////////////////
void
SimpleTestHierarchyRunner::run(TestHierarchyHandler* hierarchy
      , TestFixtureResultCollector* resultCollector
      , const StringList& specifiedTestcases)
{
   This->run(hierarchy, resultCollector, specifiedTestcases);
}

///////////////////////////////////////////////////////

TESTNGPP_NS_END

