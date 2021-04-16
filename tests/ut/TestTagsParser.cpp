#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTagsParser.h"

static struct TESTCASE_TestTagsParser_testShouldBeAbleToParseSingleGroup
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToParseSingleGroup()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToParseSingleGroup"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 103)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToParseSingleGroup()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToParseSingleGroup ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToParseMultiGroups
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToParseMultiGroups()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToParseMultiGroups"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 148)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToParseMultiGroups()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToParseMultiGroups ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll1
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll1()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeMatchAll1"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 251)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeMatchAll1()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll1 ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll2
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll2()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeMatchAll2"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 354)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeMatchAll2()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll2 ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll3
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAll3()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeMatchAll3"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 456)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeMatchAll3()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll3 ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAllNotInTopScope
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeMatchAllNotInTopScope()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeMatchAllNotInTopScope"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 473)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeMatchAllNotInTopScope()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAllNotInTopScope ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeSignOfNoTag
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeSignOfNoTag()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeSignOfNoTag"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 480)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeSignOfNoTag()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeSignOfNoTag ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToHandleMatchAll
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToHandleMatchAll()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToHandleMatchAll"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 583)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToHandleMatchAll()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToHandleMatchAll ;



static struct TESTCASE_TestTagsParser_testDollarSignShouldNotBeUsedInAndGroup
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testDollarSignShouldNotBeUsedInAndGroup()
      : TESTNGPPST_NS::TestCase
        ( "testDollarSignShouldNotBeUsedInAndGroup"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 629)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testDollarSignShouldNotBeUsedInAndGroup()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testDollarSignShouldNotBeUsedInAndGroup ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeAndGroup
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecognizeAndGroup()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecognizeAndGroup"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 636)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecognizeAndGroup()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeAndGroup ;



static struct TESTCASE_TestTagsParser_testShouldBeAbleToRecogonizeAllObjWithTags
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTagsParser_testShouldBeAbleToRecogonizeAllObjWithTags()
      : TESTNGPPST_NS::TestCase
        ( "testShouldBeAbleToRecogonizeAllObjWithTags"
        , "TestTagsParser"
        , "TestTagsParser"
        , 0
        , "TestTagsParser.h"
        , 739)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTagsParser();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTagsParser*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldBeAbleToRecogonizeAllObjWithTags()
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
   TestTagsParser* belongedFixture;
} testcase_instance_TestTagsParser_testShouldBeAbleToRecogonizeAllObjWithTags ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTagsParser[] = {
&testcase_instance_TestTagsParser_testShouldBeAbleToParseSingleGroup,
&testcase_instance_TestTagsParser_testShouldBeAbleToParseMultiGroups,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll1,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll2,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAll3,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeMatchAllNotInTopScope,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeSignOfNoTag,
&testcase_instance_TestTagsParser_testShouldBeAbleToHandleMatchAll,
&testcase_instance_TestTagsParser_testDollarSignShouldNotBeUsedInAndGroup,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecognizeAndGroup,
&testcase_instance_TestTagsParser_testShouldBeAbleToRecogonizeAllObjWithTags,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTagsParser
   ( "TestTagsParser"
   , "TestTagsParser.h"
   , g_TESTCASEARRAY_TestTagsParser
   , (sizeof(g_TESTCASEARRAY_TestTagsParser)/sizeof(g_TESTCASEARRAY_TestTagsParser[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTagsParser[] = {
&test_fixture_desc_instance_TestTagsParser,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTagsParser
   ( "TestTagsParser"
   , array_of_fixture_desc_TestTagsParser
   , (sizeof(array_of_fixture_desc_TestTagsParser)/sizeof(array_of_fixture_desc_TestTagsParser[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTagsParser;
}


