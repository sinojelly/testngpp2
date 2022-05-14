
#include <iostream>

#include <testngpp/internal/TestSuiteDesc.h>

#include <testngpp/listener/TestResultCollector.h>

#include <testngpp/runner/TestSuiteRunner.h>
#include <testngpp/runner/TestFilter.h>
#include <testngpp/runner/TestFixtureRunner.h>
#include <testngpp/runner/TestSuiteContext.h>
#include <testngpp/utils/StringList.h>

TESTNGPP_NS_START

/////////////////////////////////////////////////////////////////
struct TestSuiteRunnerImpl 
{
   TestSuiteRunnerImpl( TestFixtureRunner* runner
                      , TestResultCollector* collector)
      : fixtureRunner(runner)
      , resultCollector(collector)
   {}

   ~TestSuiteRunnerImpl()
   {
   }

   void runAllFixtures(TestSuiteContext* suite, const TestCaseFilter* filter, const StringList& specifiedTestcases);

	void run(TestSuiteContext* suite, const TestCaseFilter* filter, const StringList& specifiedTestcases);

   TestFixtureRunner* fixtureRunner;     // X
   TestResultCollector* resultCollector; // X
};

/////////////////////////////////////////////////////////////////
TestSuiteRunner::TestSuiteRunner
   ( TestFixtureRunner* runner
   , TestResultCollector* collector)
	: This(new TestSuiteRunnerImpl(runner, collector))
{
}

/////////////////////////////////////////////////////////////////
TestSuiteRunner::~TestSuiteRunner()
{
   delete This;
}

/////////////////////////////////////////////////////////////////
void
TestSuiteRunnerImpl::
runAllFixtures(TestSuiteContext* suite, const TestCaseFilter* filter, const StringList& specifiedTestcases)
{
   for(unsigned int i=0; i<suite->numberOfFixtures(); i++)
   {
      TestFixtureContext* fixture = suite->getFixture(i);

	  fixtureRunner->run(fixture, resultCollector, filter, suite->getSuitePath(), specifiedTestcases);
   }
}

/////////////////////////////////////////////////////////////////
void
TestSuiteRunnerImpl::
run(TestSuiteContext* suite, const TestCaseFilter* filter, const StringList& specifiedTestcases)
{
    try {
        resultCollector->startTestSuite(suite->getSuite());
        runAllFixtures(suite, filter, specifiedTestcases);
        resultCollector->endTestSuite(suite->getSuite());
    } catch (...) { // Any exception should finish the suite, or else next suite can not run.
        resultCollector->finishExceptionTestSuite();
        throw;
    }
}

/////////////////////////////////////////////////////////////////
void
TestSuiteRunner::
run(TestSuiteContext* suite, const TestCaseFilter* filter, const StringList& specifiedTestcases)
{
   This->run(suite, filter, specifiedTestcases);
}

/////////////////////////////////////////////////////////////////

TESTNGPP_NS_END

