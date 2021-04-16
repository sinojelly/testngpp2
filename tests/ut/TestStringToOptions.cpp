#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestStringToOptions.h"

static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleString
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleString()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleString"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 27)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleString()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleString ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 32)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 37)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 42)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 47)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 52)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 57)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions ;



static struct TESTCASE_TestStringToOptions_testShouldBeAbleToParseToCArgs
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestStringToOptions_testShouldBeAbleToParseToCArgs()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToParseToCArgs"
        , "TestStringToOptions"
        , "TestStringToOptions"
        , 0
        , "TestStringToOptions.h"
        , 62)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestStringToOptions();
      }
      else
      {
         belongedFixture = dynamic_cast<TestStringToOptions*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToParseToCArgs()
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
   TestStringToOptions* belongedFixture;
} testcase_instance_TestStringToOptions_testShouldBeAbleToParseToCArgs ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestStringToOptions[] = {
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleString,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingBlank,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTrailingBlank,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithLeadingAndTrailingBlank,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithTab,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteOptions,
&testcase_instance_TestStringToOptions_testShouldBeAbleToGetNumberOfArgsOfSimpleStringWithDoubleQuoteInsideOptions,
&testcase_instance_TestStringToOptions_testShouldBeAbleToParseToCArgs,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestStringToOptions
   ( "TestStringToOptions"
   , "TestStringToOptions.h"
   , g_TESTCASEARRAY_TestStringToOptions
   , (sizeof(g_TESTCASEARRAY_TestStringToOptions)/sizeof(g_TESTCASEARRAY_TestStringToOptions[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestStringToOptions[] = {
&test_fixture_desc_instance_TestStringToOptions,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestStringToOptions
   ( "TestStringToOptions"
   , array_of_fixture_desc_TestStringToOptions
   , (sizeof(array_of_fixture_desc_TestStringToOptions)/sizeof(array_of_fixture_desc_TestStringToOptions[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestStringToOptions;
}


