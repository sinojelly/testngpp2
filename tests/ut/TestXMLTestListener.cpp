#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestXMLTestListener.h"

static struct TESTCASE_TestXMLTestListener_testXMLTestListener
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestXMLTestListener_testXMLTestListener()
      : TESTNGPPST_NS::TestCase
        ( "testXMLTestListener"
        , "TestXMLTestListener"
        , "TestXMLTestListener"
        , 0
        , "TestXMLTestListener.h"
        , 48)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestXMLTestListener();
      }
      else
      {
         belongedFixture = dynamic_cast<TestXMLTestListener*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testXMLTestListener()
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
   TestXMLTestListener* belongedFixture;
} testcase_instance_TestXMLTestListener_testXMLTestListener ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestXMLTestListener[] = {
&testcase_instance_TestXMLTestListener_testXMLTestListener,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestXMLTestListener
   ( "TestXMLTestListener"
   , "TestXMLTestListener.h"
   , g_TESTCASEARRAY_TestXMLTestListener
   , (sizeof(g_TESTCASEARRAY_TestXMLTestListener)/sizeof(g_TESTCASEARRAY_TestXMLTestListener[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestXMLTestListener[] = {
&test_fixture_desc_instance_TestXMLTestListener,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestXMLTestListener
   ( "TestXMLTestListener"
   , array_of_fixture_desc_TestXMLTestListener
   , (sizeof(array_of_fixture_desc_TestXMLTestListener)/sizeof(array_of_fixture_desc_TestXMLTestListener[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestXMLTestListener;
}


