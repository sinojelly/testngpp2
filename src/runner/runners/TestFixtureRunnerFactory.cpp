
#include <testngpp/runner/TestFixtureRunner.h>
#include <testngpp/runner/SimpleTestHierarchyRunner.h>
#include <testngpp/runner/TestCaseRunnerFactory.h>
#include <testngpp/runner/TestFixtureRunnerFactory.h>


TESTNGPP_NS_START

namespace
{
   TestFixtureRunner*
   createSimpleInstance()
   {
      return new TestFixtureRunner( \
                  new SimpleTestHierarchyRunner( \
				  TestCaseRunnerFactory::createInstance()));
   }
}


////////////////////////////////////////////////////////
TestFixtureRunner*
TestFixtureRunnerFactory::
createInstance(bool useSandbox, unsigned int maxConcurrent)
{
   return createSimpleInstance();
}

////////////////////////////////////////////////////////
void 
TestFixtureRunnerFactory::
destroyInstance(TestFixtureRunner* instance)
{
   if(instance == 0)
   {
      return;
   }

   delete instance;

   TestCaseRunnerFactory::releaseInstance(0);
}

////////////////////////////////////////////////////////

TESTNGPP_NS_END
