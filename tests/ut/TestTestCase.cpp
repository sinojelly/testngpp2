#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTestCase.h"

static struct TESTCASE_TestTestCase_testShouldBeAbleToGetFileName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCase_testShouldBeAbleToGetFileName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetFileName"
        , "TestTestCase"
        , "TestTestCase"
        , 0
        , "TestTestCase.h"
        , 31)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCase();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCase*>(fixture);
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
   TestTestCase* belongedFixture;
} testcase_instance_TestTestCase_testShouldBeAbleToGetFileName ;



static struct TESTCASE_TestTestCase_testShouldBeAbleToGetTestCaseName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCase_testShouldBeAbleToGetTestCaseName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetTestCaseName"
        , "TestTestCase"
        , "TestTestCase"
        , 0
        , "TestTestCase.h"
        , 36)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCase();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCase*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetTestCaseName()
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
   TestTestCase* belongedFixture;
} testcase_instance_TestTestCase_testShouldBeAbleToGetTestCaseName ;



static struct TESTCASE_TestTestCase_testShouldBeAbleToGetTestFixtureName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCase_testShouldBeAbleToGetTestFixtureName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetTestFixtureName"
        , "TestTestCase"
        , "TestTestCase"
        , 0
        , "TestTestCase.h"
        , 41)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCase();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCase*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetTestFixtureName()
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
   TestTestCase* belongedFixture;
} testcase_instance_TestTestCase_testShouldBeAbleToGetTestFixtureName ;



static struct TESTCASE_TestTestCase_testShouldBeAbleToGetLineOfFile
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCase_testShouldBeAbleToGetLineOfFile()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetLineOfFile"
        , "TestTestCase"
        , "TestTestCase"
        , 0
        , "TestTestCase.h"
        , 46)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCase();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCase*>(fixture);
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
   TestTestCase* belongedFixture;
} testcase_instance_TestTestCase_testShouldBeAbleToGetLineOfFile ;



static struct TESTCASE_TestTestCase_testShouldImplementTestCaseInfoReader
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCase_testShouldImplementTestCaseInfoReader()
      : TESTNGPPST_NS::TestCase
        ( "testShouldImplementTestCaseInfoReader"
        , "TestTestCase"
        , "TestTestCase"
        , 0
        , "TestTestCase.h"
        , 51)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCase();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCase*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldImplementTestCaseInfoReader()
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
   TestTestCase* belongedFixture;
} testcase_instance_TestTestCase_testShouldImplementTestCaseInfoReader ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestCase[] = {
&testcase_instance_TestTestCase_testShouldBeAbleToGetFileName,
&testcase_instance_TestTestCase_testShouldBeAbleToGetTestCaseName,
&testcase_instance_TestTestCase_testShouldBeAbleToGetTestFixtureName,
&testcase_instance_TestTestCase_testShouldBeAbleToGetLineOfFile,
&testcase_instance_TestTestCase_testShouldImplementTestCaseInfoReader,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestCase
   ( "TestTestCase"
   , "TestTestCase.h"
   , g_TESTCASEARRAY_TestTestCase
   , (sizeof(g_TESTCASEARRAY_TestTestCase)/sizeof(g_TESTCASEARRAY_TestTestCase[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTestCase[] = {
&test_fixture_desc_instance_TestTestCase,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTestCase
   ( "TestTestCase"
   , array_of_fixture_desc_TestTestCase
   , (sizeof(array_of_fixture_desc_TestTestCase)/sizeof(array_of_fixture_desc_TestTestCase[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTestCase;
}


