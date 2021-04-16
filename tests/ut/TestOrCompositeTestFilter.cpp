#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestOrCompositeTestFilter.h"

static struct TESTCASE_TestOrCompositeTestFilter_testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestOrCompositeTestFilter_testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt()
      : TESTNGPPST_NS::TestCase
        ( "testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt"
        , "TestOrCompositeTestFilter"
        , "TestOrCompositeTestFilter"
        , 0
        , "TestOrCompositeTestFilter.h"
        , 71)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestOrCompositeTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestOrCompositeTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt()
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
   TestOrCompositeTestFilter* belongedFixture;
} testcase_instance_TestOrCompositeTestFilter_testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt ;



static struct TESTCASE_TestOrCompositeTestFilter_testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestOrCompositeTestFilter_testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch()
      : TESTNGPPST_NS::TestCase
        ( "testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch"
        , "TestOrCompositeTestFilter"
        , "TestOrCompositeTestFilter"
        , 0
        , "TestOrCompositeTestFilter.h"
        , 81)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestOrCompositeTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestOrCompositeTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch()
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
   TestOrCompositeTestFilter* belongedFixture;
} testcase_instance_TestOrCompositeTestFilter_testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch ;



static struct TESTCASE_TestOrCompositeTestFilter_testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestOrCompositeTestFilter_testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt()
      : TESTNGPPST_NS::TestCase
        ( "testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt"
        , "TestOrCompositeTestFilter"
        , "TestOrCompositeTestFilter"
        , 0
        , "TestOrCompositeTestFilter.h"
        , 86)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestOrCompositeTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestOrCompositeTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt()
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
   TestOrCompositeTestFilter* belongedFixture;
} testcase_instance_TestOrCompositeTestFilter_testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt ;



static struct TESTCASE_TestOrCompositeTestFilter_testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestOrCompositeTestFilter_testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch()
      : TESTNGPPST_NS::TestCase
        ( "testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch"
        , "TestOrCompositeTestFilter"
        , "TestOrCompositeTestFilter"
        , 0
        , "TestOrCompositeTestFilter.h"
        , 97)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestOrCompositeTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestOrCompositeTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch()
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
   TestOrCompositeTestFilter* belongedFixture;
} testcase_instance_TestOrCompositeTestFilter_testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch ;



static struct TESTCASE_TestOrCompositeTestFilter_testShouldDeleteAllTestFiltersWhichAreAddedAsComposite
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestOrCompositeTestFilter_testShouldDeleteAllTestFiltersWhichAreAddedAsComposite()
      : TESTNGPPST_NS::TestCase
        ( "testShouldDeleteAllTestFiltersWhichAreAddedAsComposite"
        , "TestOrCompositeTestFilter"
        , "TestOrCompositeTestFilter"
        , 0
        , "TestOrCompositeTestFilter.h"
        , 103)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestOrCompositeTestFilter();
      }
      else
      {
         belongedFixture = dynamic_cast<TestOrCompositeTestFilter*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->testShouldDeleteAllTestFiltersWhichAreAddedAsComposite()
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
   TestOrCompositeTestFilter* belongedFixture;
} testcase_instance_TestOrCompositeTestFilter_testShouldDeleteAllTestFiltersWhichAreAddedAsComposite ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestOrCompositeTestFilter[] = {
&testcase_instance_TestOrCompositeTestFilter_testShouldMatchesAFixutreIfAnyOfAddedFiltersMatchesIt,
&testcase_instance_TestOrCompositeTestFilter_testShouldNotMatchAFixtureIfAllAddedFiltersClaimsNotMatch,
&testcase_instance_TestOrCompositeTestFilter_testShouldMatchesATestcaseIfAnyOfAddedFiltersMatchesIt,
&testcase_instance_TestOrCompositeTestFilter_testShouldNotMatchATestcaseIfAllAddedFiltersClaimsNotMatch,
&testcase_instance_TestOrCompositeTestFilter_testShouldDeleteAllTestFiltersWhichAreAddedAsComposite,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestOrCompositeTestFilter
   ( "TestOrCompositeTestFilter"
   , "TestOrCompositeTestFilter.h"
   , g_TESTCASEARRAY_TestOrCompositeTestFilter
   , (sizeof(g_TESTCASEARRAY_TestOrCompositeTestFilter)/sizeof(g_TESTCASEARRAY_TestOrCompositeTestFilter[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestOrCompositeTestFilter[] = {
&test_fixture_desc_instance_TestOrCompositeTestFilter,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestOrCompositeTestFilter
   ( "TestOrCompositeTestFilter"
   , array_of_fixture_desc_TestOrCompositeTestFilter
   , (sizeof(array_of_fixture_desc_TestOrCompositeTestFilter)/sizeof(array_of_fixture_desc_TestOrCompositeTestFilter[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestOrCompositeTestFilter;
}


