#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestAssertionFailure.h"

static struct TESTCASE_TestAssertionFailure_testShouldBeAbleToGetFileName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestAssertionFailure_testShouldBeAbleToGetFileName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetFileName"
        , "TestAssertionFailure"
        , "TestAssertionFailure"
        , 0
        , "TestAssertionFailure.h"
        , 30)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestAssertionFailure();
      }
      else
      {
         belongedFixture = dynamic_cast<TestAssertionFailure*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetFileName()
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
   TestAssertionFailure* belongedFixture;
} testcase_instance_TestAssertionFailure_testShouldBeAbleToGetFileName ;



static struct TESTCASE_TestAssertionFailure_testShouldBeAbleToGetLineOfFile
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestAssertionFailure_testShouldBeAbleToGetLineOfFile()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetLineOfFile"
        , "TestAssertionFailure"
        , "TestAssertionFailure"
        , 0
        , "TestAssertionFailure.h"
        , 35)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestAssertionFailure();
      }
      else
      {
         belongedFixture = dynamic_cast<TestAssertionFailure*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetLineOfFile()
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
   TestAssertionFailure* belongedFixture;
} testcase_instance_TestAssertionFailure_testShouldBeAbleToGetLineOfFile ;



static struct TESTCASE_TestAssertionFailure_testShouldBeAbleToGetTheReasonOfFailure
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestAssertionFailure_testShouldBeAbleToGetTheReasonOfFailure()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetTheReasonOfFailure"
        , "TestAssertionFailure"
        , "TestAssertionFailure"
        , 0
        , "TestAssertionFailure.h"
        , 40)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestAssertionFailure();
      }
      else
      {
         belongedFixture = dynamic_cast<TestAssertionFailure*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetTheReasonOfFailure()
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
   TestAssertionFailure* belongedFixture;
} testcase_instance_TestAssertionFailure_testShouldBeAbleToGetTheReasonOfFailure ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestAssertionFailure[] = {
&testcase_instance_TestAssertionFailure_testShouldBeAbleToGetFileName,
&testcase_instance_TestAssertionFailure_testShouldBeAbleToGetLineOfFile,
&testcase_instance_TestAssertionFailure_testShouldBeAbleToGetTheReasonOfFailure,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestAssertionFailure
   ( "TestAssertionFailure"
   , "TestAssertionFailure.h"
   , g_TESTCASEARRAY_TestAssertionFailure
   , (sizeof(g_TESTCASEARRAY_TestAssertionFailure)/sizeof(g_TESTCASEARRAY_TestAssertionFailure[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestAssertionFailure[] = {
&test_fixture_desc_instance_TestAssertionFailure,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestAssertionFailure
   ( "TestAssertionFailure"
   , array_of_fixture_desc_TestAssertionFailure
   , (sizeof(array_of_fixture_desc_TestAssertionFailure)/sizeof(array_of_fixture_desc_TestAssertionFailure[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestAssertionFailure;
}


