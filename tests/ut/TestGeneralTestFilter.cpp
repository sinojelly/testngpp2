#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestGeneralTestFilter.h"

static struct TESTCASE_TestGeneralTestFilter_testShouldBeAbleToTellIfSpecifiedTestFixtureMatches
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestGeneralTestFilter_testShouldBeAbleToTellIfSpecifiedTestFixtureMatches()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToTellIfSpecifiedTestFixtureMatches"
        , "TestGeneralTestFilter"
        , "TestGeneralTestFilter"
        , 0
        , "TestGeneralTestFilter.h"
        , 78)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestGeneralTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestGeneralTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToTellIfSpecifiedTestFixtureMatches()
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
   TestGeneralTestFilter* belongedFixture;
} testcase_instance_TestGeneralTestFilter_testShouldBeAbleToTellIfSpecifiedTestFixtureMatches ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestGeneralTestFilter[] = {
&testcase_instance_TestGeneralTestFilter_testShouldBeAbleToTellIfSpecifiedTestFixtureMatches,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestGeneralTestFilter
   ( "TestGeneralTestFilter"
   , "TestGeneralTestFilter.h"
   , g_TESTCASEARRAY_TestGeneralTestFilter
   , (sizeof(g_TESTCASEARRAY_TestGeneralTestFilter)/sizeof(g_TESTCASEARRAY_TestGeneralTestFilter[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestGeneralTestFilter[] = {
&test_fixture_desc_instance_TestGeneralTestFilter,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestGeneralTestFilter
   ( "TestGeneralTestFilter"
   , array_of_fixture_desc_TestGeneralTestFilter
   , (sizeof(array_of_fixture_desc_TestGeneralTestFilter)/sizeof(array_of_fixture_desc_TestGeneralTestFilter[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestGeneralTestFilter;
}


