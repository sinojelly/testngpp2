#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTestFixtureDesc.h"

static struct TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetFileNameOfFixture
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetFileNameOfFixture()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetFileNameOfFixture"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 41)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetFileNameOfFixture()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetFileNameOfFixture ;



static struct TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetFixtureName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetFixtureName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetFixtureName"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 46)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetFixtureName()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetFixtureName ;



static struct TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetNumberOfTestCases
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetNumberOfTestCases()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfTestCases"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 51)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfTestCases()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetNumberOfTestCases ;



static struct TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetTestCaseByIndex
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldBeAbleToGetTestCaseByIndex()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetTestCaseByIndex"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 56)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetTestCaseByIndex()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetTestCaseByIndex ;



static struct TESTCASE_TestTestFixtureDesc_testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases()
      : TESTNGPPST_NS::TestCase
        ( "testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 62)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases ;



static struct TESTCASE_TestTestFixtureDesc_testShouldImplementTestFixtureInfoReader
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureDesc_testShouldImplementTestFixtureInfoReader()
      : TESTNGPPST_NS::TestCase
        ( "testShouldImplementTestFixtureInfoReader"
        , "TestTestFixtureDesc"
        , "TestTestFixtureDesc"
        , 0
        , "TestTestFixtureDesc.h"
        , 67)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldImplementTestFixtureInfoReader()
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
   TestTestFixtureDesc* belongedFixture;
} testcase_instance_TestTestFixtureDesc_testShouldImplementTestFixtureInfoReader ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestFixtureDesc[] = {
&testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetFileNameOfFixture,
&testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetFixtureName,
&testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetNumberOfTestCases,
&testcase_instance_TestTestFixtureDesc_testShouldBeAbleToGetTestCaseByIndex,
&testcase_instance_TestTestFixtureDesc_testShouldGetNullPointerIfTryingToGetTestCaseWithIndexWhichExceedsTheNumberOfTestCases,
&testcase_instance_TestTestFixtureDesc_testShouldImplementTestFixtureInfoReader,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestFixtureDesc
   ( "TestTestFixtureDesc"
   , "TestTestFixtureDesc.h"
   , g_TESTCASEARRAY_TestTestFixtureDesc
   , (sizeof(g_TESTCASEARRAY_TestTestFixtureDesc)/sizeof(g_TESTCASEARRAY_TestTestFixtureDesc[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTestFixtureDesc[] = {
&test_fixture_desc_instance_TestTestFixtureDesc,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTestFixtureDesc
   ( "TestTestFixtureDesc"
   , array_of_fixture_desc_TestTestFixtureDesc
   , (sizeof(array_of_fixture_desc_TestTestFixtureDesc)/sizeof(array_of_fixture_desc_TestTestFixtureDesc[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTestFixtureDesc;
}


