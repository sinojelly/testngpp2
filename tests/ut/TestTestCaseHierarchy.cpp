#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestTestCaseHierarchy.h"

static struct TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors_of_root
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors_of_root()
      : TESTNGPPST_NS::TestCase
        ( "test_should_be_able_to_get_direct_successors_of_root"
        , "TestTestCaseHierarchy"
        , "TestTestCaseHierarchy"
        , 0
        , "TestTestCaseHierarchy.h"
        , 97)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCaseHierarchy();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCaseHierarchy*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_should_be_able_to_get_direct_successors_of_root()
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
   TestTestCaseHierarchy* belongedFixture;
} testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors_of_root ;



static struct TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors()
      : TESTNGPPST_NS::TestCase
        ( "test_should_be_able_to_get_direct_successors"
        , "TestTestCaseHierarchy"
        , "TestTestCaseHierarchy"
        , 0
        , "TestTestCaseHierarchy.h"
        , 110)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCaseHierarchy();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCaseHierarchy*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_should_be_able_to_get_direct_successors()
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
   TestTestCaseHierarchy* belongedFixture;
} testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors ;



static struct TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors_of_root
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors_of_root()
      : TESTNGPPST_NS::TestCase
        ( "test_should_be_able_to_get_all_successors_of_root"
        , "TestTestCaseHierarchy"
        , "TestTestCaseHierarchy"
        , 0
        , "TestTestCaseHierarchy.h"
        , 124)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCaseHierarchy();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCaseHierarchy*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_should_be_able_to_get_all_successors_of_root()
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
   TestTestCaseHierarchy* belongedFixture;
} testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors_of_root ;



static struct TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors()
      : TESTNGPPST_NS::TestCase
        ( "test_should_be_able_to_get_all_successors"
        , "TestTestCaseHierarchy"
        , "TestTestCaseHierarchy"
        , 0
        , "TestTestCaseHierarchy.h"
        , 140)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestCaseHierarchy();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestCaseHierarchy*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_should_be_able_to_get_all_successors()
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
   TestTestCaseHierarchy* belongedFixture;
} testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestCaseHierarchy[] = {
&testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors_of_root,
&testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_direct_successors,
&testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors_of_root,
&testcase_instance_TestTestCaseHierarchy_test_should_be_able_to_get_all_successors,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestCaseHierarchy
   ( "TestTestCaseHierarchy"
   , "TestTestCaseHierarchy.h"
   , g_TESTCASEARRAY_TestTestCaseHierarchy
   , (sizeof(g_TESTCASEARRAY_TestTestCaseHierarchy)/sizeof(g_TESTCASEARRAY_TestTestCaseHierarchy[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestTestCaseHierarchy[] = {
&test_fixture_desc_instance_TestTestCaseHierarchy,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestTestCaseHierarchy
   ( "TestTestCaseHierarchy"
   , array_of_fixture_desc_TestTestCaseHierarchy
   , (sizeof(array_of_fixture_desc_TestTestCaseHierarchy)/sizeof(array_of_fixture_desc_TestTestCaseHierarchy[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestTestCaseHierarchy;
}


