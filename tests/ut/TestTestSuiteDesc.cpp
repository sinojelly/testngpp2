#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTestSuiteDesc.h"

static struct TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNameOfSuite
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNameOfSuite()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNameOfSuite"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 51)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNameOfSuite()
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNameOfSuite ;



static struct TESTCASE_TestTestSuiteDesc_testShouldBeAbleSetFileName
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldBeAbleSetFileName()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleSetFileName"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 58)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleSetFileName()
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldBeAbleSetFileName ;



static struct TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestCases
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestCases()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfTestCases"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 69)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestCases ;



static struct TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestFixtures
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestFixtures()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfTestFixtures"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 76)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfTestFixtures()
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestFixtures ;



static struct TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetFixtureDescByIndex
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldBeAbleToGetFixtureDescByIndex()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetFixtureDescByIndex"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 83)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetFixtureDescByIndex()
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetFixtureDescByIndex ;



static struct TESTCASE_TestTestSuiteDesc_testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestSuiteDesc_testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray()
      : TESTNGPPST_NS::TestCase
        ( "testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray"
        , "TestTestSuiteDesc"
        , "TestTestSuiteDesc"
        , 0
        , "TestTestSuiteDesc.h"
        , 91)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestSuiteDesc();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestSuiteDesc*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray()
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
   TestTestSuiteDesc* belongedFixture;
} testcase_instance_TestTestSuiteDesc_testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestSuiteDesc[] = {
&testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNameOfSuite,
&testcase_instance_TestTestSuiteDesc_testShouldBeAbleSetFileName,
&testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestCases,
&testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetNumberOfTestFixtures,
&testcase_instance_TestTestSuiteDesc_testShouldBeAbleToGetFixtureDescByIndex,
&testcase_instance_TestTestSuiteDesc_testShouldGetNullPointerIfGivenIndexExceedsTheNumberOfFixturesInArray,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestSuiteDesc
   ( "TestTestSuiteDesc"
   , "TestTestSuiteDesc.h"
   , g_TESTCASEARRAY_TestTestSuiteDesc
   , (sizeof(g_TESTCASEARRAY_TestTestSuiteDesc)/sizeof(g_TESTCASEARRAY_TestTestSuiteDesc[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTestSuiteDesc[] = {
&test_fixture_desc_instance_TestTestSuiteDesc,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTestSuiteDesc
   ( "TestTestSuiteDesc"
   , array_of_fixture_desc_TestTestSuiteDesc
   , (sizeof(array_of_fixture_desc_TestTestSuiteDesc)/sizeof(array_of_fixture_desc_TestTestSuiteDesc[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTestSuiteDesc;
}


