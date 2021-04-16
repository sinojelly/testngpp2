#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestXMLBuilder.h"

static struct TESTCASE_TestXMLBuilder_testXMLBuilder
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestXMLBuilder_testXMLBuilder()
      : TESTNGPPST_NS::TestCase
        ( "testXMLBuilder"
        , "TestXMLBuilder"
        , "TestXMLBuilder"
        , 0
        , "TestXMLBuilder.h"
        , 18)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestXMLBuilder();
      }
      else
      {
         belongedFixture = dynamic_cast<TestXMLBuilder*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testXMLBuilder()
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
   TestXMLBuilder* belongedFixture;
} testcase_instance_TestXMLBuilder_testXMLBuilder ;



static struct TESTCASE_TestXMLBuilder_testEscapeXMLCharacters
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestXMLBuilder_testEscapeXMLCharacters()
      : TESTNGPPST_NS::TestCase
        ( "testEscapeXMLCharacters"
        , "TestXMLBuilder"
        , "TestXMLBuilder"
        , 0
        , "TestXMLBuilder.h"
        , 57)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestXMLBuilder();
      }
      else
      {
         belongedFixture = dynamic_cast<TestXMLBuilder*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testEscapeXMLCharacters()
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
   TestXMLBuilder* belongedFixture;
} testcase_instance_TestXMLBuilder_testEscapeXMLCharacters ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestXMLBuilder[] = {
&testcase_instance_TestXMLBuilder_testXMLBuilder,
&testcase_instance_TestXMLBuilder_testEscapeXMLCharacters,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestXMLBuilder
   ( "TestXMLBuilder"
   , "TestXMLBuilder.h"
   , g_TESTCASEARRAY_TestXMLBuilder
   , (sizeof(g_TESTCASEARRAY_TestXMLBuilder)/sizeof(g_TESTCASEARRAY_TestXMLBuilder[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestXMLBuilder[] = {
&test_fixture_desc_instance_TestXMLBuilder,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestXMLBuilder
   ( "TestXMLBuilder"
   , array_of_fixture_desc_TestXMLBuilder
   , (sizeof(array_of_fixture_desc_TestXMLBuilder)/sizeof(array_of_fixture_desc_TestXMLBuilder[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestXMLBuilder;
}


