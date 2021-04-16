#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestDataDriven.h"

static struct TESTCASE_TestDataDriven_test_50
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestDataDriven_test_50()
      : TESTNGPPST_NS::TestCase
        ( "$> invoke a test method with 1 parameter"
        , "DataDriven"
        , "TestDataDriven"
        , 0
        , "TestDataDriven.h"
        , 50)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestDataDriven();
      }
      else
      {
         belongedFixture = dynamic_cast<TestDataDriven*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_50()
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
   TestDataDriven* belongedFixture;
} testcase_instance_TestDataDriven_test_50 ;



static struct TESTCASE_TestDataDriven_test_67
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestDataDriven_test_67()
      : TESTNGPPST_NS::TestCase
        ( "$> invoke a test method with 2 parameters"
        , "DataDriven"
        , "TestDataDriven"
        , 0
        , "TestDataDriven.h"
        , 67)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestDataDriven();
      }
      else
      {
         belongedFixture = dynamic_cast<TestDataDriven*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_67()
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
   TestDataDriven* belongedFixture;
} testcase_instance_TestDataDriven_test_67 ;



static struct TESTCASE_TestDataDriven_test_86
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestDataDriven_test_86()
      : TESTNGPPST_NS::TestCase
        ( "should throw exception if types mismatch"
        , "DataDriven"
        , "TestDataDriven"
        , 0
        , "TestDataDriven.h"
        , 86)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestDataDriven();
      }
      else
      {
         belongedFixture = dynamic_cast<TestDataDriven*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_86()
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
   TestDataDriven* belongedFixture;
} testcase_instance_TestDataDriven_test_86 ;



static struct TESTCASE_TestDataDriven_test_102
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestDataDriven_test_102()
      : TESTNGPPST_NS::TestCase
        ( "$> convert data group to string"
        , "DataDriven"
        , "TestDataDriven"
        , 0
        , "TestDataDriven.h"
        , 102)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestDataDriven();
      }
      else
      {
         belongedFixture = dynamic_cast<TestDataDriven*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_102()
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
   TestDataDriven* belongedFixture;
} testcase_instance_TestDataDriven_test_102 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestDataDriven[] = {
&testcase_instance_TestDataDriven_test_50,
&testcase_instance_TestDataDriven_test_67,
&testcase_instance_TestDataDriven_test_86,
&testcase_instance_TestDataDriven_test_102,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestDataDriven
   ( "DataDriven"
   , "TestDataDriven.h"
   , g_TESTCASEARRAY_TestDataDriven
   , (sizeof(g_TESTCASEARRAY_TestDataDriven)/sizeof(g_TESTCASEARRAY_TestDataDriven[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestDataDriven[] = {
&test_fixture_desc_instance_TestDataDriven,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestDataDriven
   ( "TestDataDriven"
   , array_of_fixture_desc_TestDataDriven
   , (sizeof(array_of_fixture_desc_TestDataDriven)/sizeof(array_of_fixture_desc_TestDataDriven[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestDataDriven;
}


