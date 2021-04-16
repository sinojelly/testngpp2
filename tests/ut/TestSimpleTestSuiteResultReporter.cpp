#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestSimpleTestSuiteResultReporter.h"

static struct TESTCASE_TestSimpleTestSuiteResultReporter_testShouldBeAbleToReportNumberOfCrashedCases
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestSimpleTestSuiteResultReporter_testShouldBeAbleToReportNumberOfCrashedCases()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToReportNumberOfCrashedCases"
        , "TestSimpleTestSuiteResultReporter"
        , "TestSimpleTestSuiteResultReporter"
        , 0
        , "TestSimpleTestSuiteResultReporter.h"
        , 33)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestSimpleTestSuiteResultReporter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestSimpleTestSuiteResultReporter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToReportNumberOfCrashedCases()
;
   }

   TESTNGPPST_NS::TestFixture* getFixture() const
   {
      return belongedFixture;
   }

   unsigned int numberOfTags() const
   {
      return 0;
   }

   const char** getTags() const
   {
      static const char* tags[] = {0};
      return tags;
   }

   const char* getMemCheckSwitch() const
   {
      static const char* memCheckSwitch = "none";
      return memCheckSwitch;
   }

private:
   TestSimpleTestSuiteResultReporter* belongedFixture;
} testcase_instance_TestSimpleTestSuiteResultReporter_testShouldBeAbleToReportNumberOfCrashedCases ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestSimpleTestSuiteResultReporter[] = {
&testcase_instance_TestSimpleTestSuiteResultReporter_testShouldBeAbleToReportNumberOfCrashedCases,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestSimpleTestSuiteResultReporter
   ( "TestSimpleTestSuiteResultReporter"
   , "TestSimpleTestSuiteResultReporter.h"
   , g_TESTCASEARRAY_TestSimpleTestSuiteResultReporter
   , (sizeof(g_TESTCASEARRAY_TestSimpleTestSuiteResultReporter)/sizeof(g_TESTCASEARRAY_TestSimpleTestSuiteResultReporter[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestSimpleTestSuiteResultReporter[] = {
&test_fixture_desc_instance_TestSimpleTestSuiteResultReporter,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestSimpleTestSuiteResultReporter
   ( "TestSimpleTestSuiteResultReporter"
   , array_of_fixture_desc_TestSimpleTestSuiteResultReporter
   , (sizeof(array_of_fixture_desc_TestSimpleTestSuiteResultReporter)/sizeof(array_of_fixture_desc_TestSimpleTestSuiteResultReporter[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestSimpleTestSuiteResultReporter;
}


