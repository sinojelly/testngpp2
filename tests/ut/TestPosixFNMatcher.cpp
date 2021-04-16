#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestPosixFNMatcher.h"

static struct TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUseWildCard
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUseWildCard()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToUseWildCard"
        , "TestPosixFNMatcher"
        , "TestPosixFNMatcher"
        , 0
        , "TestPosixFNMatcher.h"
        , 27)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestPosixFNMatcher();
      }
      else
      {
         belongedFixture = dynamic_cast<TestPosixFNMatcher*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToUseWildCard()
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
   TestPosixFNMatcher* belongedFixture;
} testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUseWildCard ;



static struct TESTCASE_TestPosixFNMatcher_testShouldNotMatchEmptyStringEvenThePatternIsWildcard
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestPosixFNMatcher_testShouldNotMatchEmptyStringEvenThePatternIsWildcard()
      : TESTNGPPST_NS::TestCase
        ( "testShouldNotMatchEmptyStringEvenThePatternIsWildcard"
        , "TestPosixFNMatcher"
        , "TestPosixFNMatcher"
        , 0
        , "TestPosixFNMatcher.h"
        , 35)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestPosixFNMatcher();
      }
      else
      {
         belongedFixture = dynamic_cast<TestPosixFNMatcher*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldNotMatchEmptyStringEvenThePatternIsWildcard()
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
   TestPosixFNMatcher* belongedFixture;
} testcase_instance_TestPosixFNMatcher_testShouldNotMatchEmptyStringEvenThePatternIsWildcard ;



static struct TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUsePartialWildcard
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUsePartialWildcard()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToUsePartialWildcard"
        , "TestPosixFNMatcher"
        , "TestPosixFNMatcher"
        , 0
        , "TestPosixFNMatcher.h"
        , 42)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestPosixFNMatcher();
      }
      else
      {
         belongedFixture = dynamic_cast<TestPosixFNMatcher*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToUsePartialWildcard()
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
   TestPosixFNMatcher* belongedFixture;
} testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUsePartialWildcard ;



static struct TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUseSingleCharPattern
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestPosixFNMatcher_testShouldBeAbleToUseSingleCharPattern()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToUseSingleCharPattern"
        , "TestPosixFNMatcher"
        , "TestPosixFNMatcher"
        , 0
        , "TestPosixFNMatcher.h"
        , 51)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestPosixFNMatcher();
      }
      else
      {
         belongedFixture = dynamic_cast<TestPosixFNMatcher*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToUseSingleCharPattern()
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
   TestPosixFNMatcher* belongedFixture;
} testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUseSingleCharPattern ;



static struct TESTCASE_TestPosixFNMatcher_testShouldIgnoreCaseRestriction
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestPosixFNMatcher_testShouldIgnoreCaseRestriction()
      : TESTNGPPST_NS::TestCase
        ( "testShouldIgnoreCaseRestriction"
        , "TestPosixFNMatcher"
        , "TestPosixFNMatcher"
        , 0
        , "TestPosixFNMatcher.h"
        , 60)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestPosixFNMatcher();
      }
      else
      {
         belongedFixture = dynamic_cast<TestPosixFNMatcher*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldIgnoreCaseRestriction()
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
   TestPosixFNMatcher* belongedFixture;
} testcase_instance_TestPosixFNMatcher_testShouldIgnoreCaseRestriction ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestPosixFNMatcher[] = {
&testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUseWildCard,
&testcase_instance_TestPosixFNMatcher_testShouldNotMatchEmptyStringEvenThePatternIsWildcard,
&testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUsePartialWildcard,
&testcase_instance_TestPosixFNMatcher_testShouldBeAbleToUseSingleCharPattern,
&testcase_instance_TestPosixFNMatcher_testShouldIgnoreCaseRestriction,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestPosixFNMatcher
   ( "TestPosixFNMatcher"
   , "TestPosixFNMatcher.h"
   , g_TESTCASEARRAY_TestPosixFNMatcher
   , (sizeof(g_TESTCASEARRAY_TestPosixFNMatcher)/sizeof(g_TESTCASEARRAY_TestPosixFNMatcher[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestPosixFNMatcher[] = {
&test_fixture_desc_instance_TestPosixFNMatcher,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestPosixFNMatcher
   ( "TestPosixFNMatcher"
   , array_of_fixture_desc_TestPosixFNMatcher
   , (sizeof(array_of_fixture_desc_TestPosixFNMatcher)/sizeof(array_of_fixture_desc_TestPosixFNMatcher[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestPosixFNMatcher;
}


