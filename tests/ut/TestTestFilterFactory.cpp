#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTestFilterFactory.h"

static struct TESTCASE_TestTestFilterFactory_testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFilterFactory_testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified()
      : TESTNGPPST_NS::TestCase
        ( "testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified"
        , "TestTestFilterFactory"
        , "TestTestFilterFactory"
        , 0
        , "TestTestFilterFactory.h"
        , 33)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFilterFactory();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFilterFactory*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified()
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
   TestTestFilterFactory* belongedFixture;
} testcase_instance_TestTestFilterFactory_testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified ;



static struct TESTCASE_TestTestFilterFactory_testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFilterFactory_testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified()
      : TESTNGPPST_NS::TestCase
        ( "testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified"
        , "TestTestFilterFactory"
        , "TestTestFilterFactory"
        , 0
        , "TestTestFilterFactory.h"
        , 61)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFilterFactory();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFilterFactory*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified()
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
   TestTestFilterFactory* belongedFixture;
} testcase_instance_TestTestFilterFactory_testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestFilterFactory[] = {
&testcase_instance_TestTestFilterFactory_testShouldReturnAWildcardFilterIfNoFilterOptionsSpecified,
&testcase_instance_TestTestFilterFactory_testShouldReturnACapableFilterIfThereAreFilterOptionsSpecified,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestFilterFactory
   ( "TestTestFilterFactory"
   , "TestTestFilterFactory.h"
   , g_TESTCASEARRAY_TestTestFilterFactory
   , (sizeof(g_TESTCASEARRAY_TestTestFilterFactory)/sizeof(g_TESTCASEARRAY_TestTestFilterFactory[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTestFilterFactory[] = {
&test_fixture_desc_instance_TestTestFilterFactory,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTestFilterFactory
   ( "TestTestFilterFactory"
   , array_of_fixture_desc_TestTestFilterFactory
   , (sizeof(array_of_fixture_desc_TestTestFilterFactory)/sizeof(array_of_fixture_desc_TestTestFilterFactory[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTestFilterFactory;
}


