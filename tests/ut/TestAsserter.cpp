#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestAsserter.h"

static struct TESTCASE_TestTestAsserter_test_7
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestAsserter_test_7()
      : TESTNGPPST_NS::TestCase
        ( "the difference of two double values less than FLT_EPSILON should be judged as equal"
        , "TestAsserter"
        , "TestAsserter"
        , 0
        , "TestAsserter.h"
        , 7)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestAsserter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestAsserter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_7()
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
   TestTestAsserter* belongedFixture;
} testcase_instance_TestTestAsserter_test_7 ;



static struct TESTCASE_TestTestAsserter_test_15
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestAsserter_test_15()
      : TESTNGPPST_NS::TestCase
        ( "the difference of two double values larger than FLT_EPSILON should be judged as not equal"
        , "TestAsserter"
        , "TestAsserter"
        , 0
        , "TestAsserter.h"
        , 15)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestAsserter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestAsserter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_15()
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
   TestTestAsserter* belongedFixture;
} testcase_instance_TestTestAsserter_test_15 ;



static struct TESTCASE_TestTestAsserter_test_23
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestAsserter_test_23()
      : TESTNGPPST_NS::TestCase
        ( "double 0.6 add float 0.1 should equal to double 0.7"
        , "TestAsserter"
        , "TestAsserter"
        , 0
        , "TestAsserter.h"
        , 23)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestAsserter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestAsserter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_23()
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
   TestTestAsserter* belongedFixture;
} testcase_instance_TestTestAsserter_test_23 ;



static struct TESTCASE_TestTestAsserter_test_31
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestAsserter_test_31()
      : TESTNGPPST_NS::TestCase
        ( "float 0.6 add float 0.1 should equal to float 0.7"
        , "TestAsserter"
        , "TestAsserter"
        , 0
        , "TestAsserter.h"
        , 31)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestAsserter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestAsserter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_31()
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
   TestTestAsserter* belongedFixture;
} testcase_instance_TestTestAsserter_test_31 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestAsserter[] = {
&testcase_instance_TestTestAsserter_test_7,
&testcase_instance_TestTestAsserter_test_15,
&testcase_instance_TestTestAsserter_test_23,
&testcase_instance_TestTestAsserter_test_31,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestAsserter
   ( "TestAsserter"
   , "TestAsserter.h"
   , g_TESTCASEARRAY_TestTestAsserter
   , (sizeof(g_TESTCASEARRAY_TestTestAsserter)/sizeof(g_TESTCASEARRAY_TestTestAsserter[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestAsserter[] = {
&test_fixture_desc_instance_TestTestAsserter,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestAsserter
   ( "TestAsserter"
   , array_of_fixture_desc_TestAsserter
   , (sizeof(array_of_fixture_desc_TestAsserter)/sizeof(array_of_fixture_desc_TestAsserter[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestAsserter;
}


