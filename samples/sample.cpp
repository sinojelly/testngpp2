#include <testngpp/internal/TestCase.h>
#include <testngpp/internal/TestFixtureDesc.h>
#include <testngpp/internal/TestSuiteDesc.h>
#include <testngpp/internal/DataDriven.h>
#include "TestFoo.h"

static struct TESTCASE_TestCFoo_test_6
   : public TESTNGPP_NS::TestCase
{
   TESTCASE_TestCFoo_test_6()
      : TESTNGPP_NS::TestCase
        ( "中文()"
        , "中文用例样例()"
        , "sample"
        , 0
        , "TestFoo.h"
        , 6)
   {}

   void setFixture(TESTNGPP_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestCFoo();
      }
      else
      {
         belongedFixture = dynamic_cast<TestCFoo*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_6()
;
   }

   TESTNGPP_NS::TestFixture* getFixture() const
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
   TestCFoo* belongedFixture;
} testcase_instance_TestCFoo_test_6 ;



static struct TESTCASE_TestCFoo_test_11
   : public TESTNGPP_NS::TestCase
{
   TESTCASE_TestCFoo_test_11()
      : TESTNGPP_NS::TestCase
        ( "测试: 1+1 = 2"
        , "中文用例样例()"
        , "sample"
        , 0
        , "TestFoo.h"
        , 11)
   {}

   void setFixture(TESTNGPP_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestCFoo();
      }
      else
      {
         belongedFixture = dynamic_cast<TestCFoo*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_11()
;
   }

   TESTNGPP_NS::TestFixture* getFixture() const
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
   TestCFoo* belongedFixture;
} testcase_instance_TestCFoo_test_11 ;



static struct TESTCASE_TestCFoo_test_16
   : public TESTNGPP_NS::TestCase
{
   TESTCASE_TestCFoo_test_16()
      : TESTNGPP_NS::TestCase
        ( "__DO__/__CLEANUP__/__DONE__"
        , "中文用例样例()"
        , "sample"
        , 0
        , "TestFoo.h"
        , 16)
   {}

   void setFixture(TESTNGPP_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestCFoo();
      }
      else
      {
         belongedFixture = dynamic_cast<TestCFoo*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_16()
;
   }

   TESTNGPP_NS::TestFixture* getFixture() const
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
   TestCFoo* belongedFixture;
} testcase_instance_TestCFoo_test_16 ;



static struct TESTCASE_TestCFoo_test_26
   : public TESTNGPP_NS::TestCase
{
   TESTCASE_TestCFoo_test_26()
      : TESTNGPP_NS::TestCase
        ( "again: __DO__/__CLEANUP__/__DONE__"
        , "中文用例样例()"
        , "sample"
        , 0
        , "TestFoo.h"
        , 26)
   {}

   void setFixture(TESTNGPP_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestCFoo();
      }
      else
      {
         belongedFixture = dynamic_cast<TestCFoo*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_26()
;
   }

   TESTNGPP_NS::TestFixture* getFixture() const
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
   TestCFoo* belongedFixture;
} testcase_instance_TestCFoo_test_26 ;



static struct TESTCASE_TestCFoo_test_35
   : public TESTNGPP_NS::TestCase
{
   TESTCASE_TestCFoo_test_35()
      : TESTNGPP_NS::TestCase
        ( "EXPECT_XXX"
        , "中文用例样例()"
        , "sample"
        , 0
        , "TestFoo.h"
        , 35)
   {}

   void setFixture(TESTNGPP_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestCFoo();
      }
      else
      {
         belongedFixture = dynamic_cast<TestCFoo*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_35()
;
   }

   TESTNGPP_NS::TestFixture* getFixture() const
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
   TestCFoo* belongedFixture;
} testcase_instance_TestCFoo_test_35 ;



static TESTNGPP_NS::TestCase* g_TESTCASEARRAY_TestCFoo[] = {
&testcase_instance_TestCFoo_test_6,
&testcase_instance_TestCFoo_test_11,
&testcase_instance_TestCFoo_test_16,
&testcase_instance_TestCFoo_test_26,
&testcase_instance_TestCFoo_test_35,
0
};




/*static*/ TESTNGPP_NS::TestFixtureDesc test_fixture_desc_instance_TestCFoo
   ( "中文用例样例()"
   , "TestFoo.h"
   , g_TESTCASEARRAY_TestCFoo
   , (sizeof(g_TESTCASEARRAY_TestCFoo)/sizeof(g_TESTCASEARRAY_TestCFoo[0])) - 1
   );



static TESTNGPP_NS::TestFixtureDesc* array_of_fixture_desc_sample[] = {
&test_fixture_desc_instance_TestCFoo,
0
};




static TESTNGPP_NS::TestSuiteDesc test_suite_desc_instance_sample
   ( "sample"
   , array_of_fixture_desc_sample
   , (sizeof(array_of_fixture_desc_sample)/sizeof(array_of_fixture_desc_sample[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPP_NS::TestSuiteDesc* ___testngpp_test_suite_desc_getter() {
   return &test_suite_desc_instance_sample;
}


