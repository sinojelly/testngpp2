#include <testngppst/internal/TestCase.h>
#include <testngppst/internal/TestFixtureDesc.h>
#include <testngppst/internal/TestSuiteDesc.h>
#include <testngppst/internal/DataDriven.h>
#include "TestMemChecker.h"

static struct TESTCASE_TestTestMemChecker_test_26
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_26()
      : TESTNGPPST_NS::TestCase
        ( "no memory leak in empty test"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 26)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_26()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_26 ;



static struct TESTCASE_TestTestMemChecker_test_30
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_30()
      : TESTNGPPST_NS::TestCase
        ( "can detect memory leak caused by new operator"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 30)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_30()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_30 ;



static struct TESTCASE_TestTestMemChecker_test_47
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_47()
      : TESTNGPPST_NS::TestCase
        ( "no memory leaked after delete"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 47)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_47()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_47 ;



static struct TESTCASE_TestTestMemChecker_test_53
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_53()
      : TESTNGPPST_NS::TestCase
        ( "should not report memory leak when using placement new"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 53)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_53()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_53 ;



static struct TESTCASE_TestTestMemChecker_test_59
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_59()
      : TESTNGPPST_NS::TestCase
        ( "can detect memory leak caused by malloc"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 59)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_59()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_59 ;



static struct TESTCASE_TestTestMemChecker_test_68
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_68()
      : TESTNGPPST_NS::TestCase
        ( "no memory leaked after free"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 68)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_68()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_68 ;



static struct TESTCASE_TestTestMemChecker_test_75
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_75()
      : TESTNGPPST_NS::TestCase
        ( "can stop memory checker in a testcase"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 75)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_75()
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
      static const char* memCheckSwitch = "off";
      return memCheckSwitch;
   }

private:
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_75 ;



static struct TESTCASE_TestTestMemChecker_test_95
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_95()
      : TESTNGPPST_NS::TestCase
        ( "can report more than one leak"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 95)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_95()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_95 ;



static struct TESTCASE_TestTestMemChecker_test_106
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_106()
      : TESTNGPPST_NS::TestCase
        ( "support checking memory leak in c file when interface_4user.h included in the c file"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 106)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_106()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_106 ;



static struct TESTCASE_TestTestMemChecker_test_111
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_111()
      : TESTNGPPST_NS::TestCase
        ( "no memory leak report after free in c file when interface_4user.h included in the c file"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 111)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_111()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_111 ;



static struct TESTCASE_TestTestMemChecker_test_117
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemChecker_test_117()
      : TESTNGPPST_NS::TestCase
        ( "user can mock malloc"
        , "TestMemChecker"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 117)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemChecker();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemChecker*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_117()
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
   TestTestMemChecker* belongedFixture;
} testcase_instance_TestTestMemChecker_test_117 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestMemChecker[] = {
&testcase_instance_TestTestMemChecker_test_26,
&testcase_instance_TestTestMemChecker_test_30,
&testcase_instance_TestTestMemChecker_test_47,
&testcase_instance_TestTestMemChecker_test_53,
&testcase_instance_TestTestMemChecker_test_59,
&testcase_instance_TestTestMemChecker_test_68,
&testcase_instance_TestTestMemChecker_test_75,
&testcase_instance_TestTestMemChecker_test_95,
&testcase_instance_TestTestMemChecker_test_106,
&testcase_instance_TestTestMemChecker_test_111,
&testcase_instance_TestTestMemChecker_test_117,
0
};




static struct TESTCASE_TestGlocalVectorMemLeak_test_145
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestGlocalVectorMemLeak_test_145()
      : TESTNGPPST_NS::TestCase
        ( "global vector should not cause report memleak by mistake"
        , "global vector"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 145)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestGlocalVectorMemLeak();
      }
      else
      {
         belongedFixture = dynamic_cast<TestGlocalVectorMemLeak*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_145()
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
   TestGlocalVectorMemLeak* belongedFixture;
} testcase_instance_TestGlocalVectorMemLeak_test_145 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestGlocalVectorMemLeak[] = {
&testcase_instance_TestGlocalVectorMemLeak_test_145,
0
};




static struct TESTCASE_TestMemberStringMemLeak1_test_157
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestMemberStringMemLeak1_test_157()
      : TESTNGPPST_NS::TestCase
        ( "only assign value to str, not str += something. no need to clear string in teardown"
        , "member/global string 1"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 157)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestMemberStringMemLeak1();
      }
      else
      {
         belongedFixture = dynamic_cast<TestMemberStringMemLeak1*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_157()
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
   TestMemberStringMemLeak1* belongedFixture;
} testcase_instance_TestMemberStringMemLeak1_test_157 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestMemberStringMemLeak1[] = {
&testcase_instance_TestMemberStringMemLeak1_test_157,
0
};




static struct TESTCASE_TestMemberStringMemLeak2_test_172
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestMemberStringMemLeak2_test_172()
      : TESTNGPPST_NS::TestCase
        ( "there is str += something. need to clear string in teardown"
        , "member/global string 2"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 172)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestMemberStringMemLeak2();
      }
      else
      {
         belongedFixture = dynamic_cast<TestMemberStringMemLeak2*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_172()
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
   TestMemberStringMemLeak2* belongedFixture;
} testcase_instance_TestMemberStringMemLeak2_test_172 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestMemberStringMemLeak2[] = {
&testcase_instance_TestMemberStringMemLeak2_test_172,
0
};




static struct TESTCASE_TestTestMemCheckOffAnnotation_test_182
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemCheckOffAnnotation_test_182()
      : TESTNGPPST_NS::TestCase
        ( "a testcase with memcheck off should not report mem leaks"
        , "TestMemCheckOffAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 182)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemCheckOffAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemCheckOffAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_182()
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
      static const char* memCheckSwitch = "off";
      return memCheckSwitch;
   }

private:
   TestTestMemCheckOffAnnotation* belongedFixture;
} testcase_instance_TestTestMemCheckOffAnnotation_test_182 ;



static struct TESTCASE_TestTestMemCheckOffAnnotation_test_187
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestMemCheckOffAnnotation_test_187()
      : TESTNGPPST_NS::TestCase
        ( "a testcase without memcheck annotation should report mem leaks"
        , "TestMemCheckOffAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 187)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestMemCheckOffAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestMemCheckOffAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_187()
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
   TestTestMemCheckOffAnnotation* belongedFixture;
} testcase_instance_TestTestMemCheckOffAnnotation_test_187 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestMemCheckOffAnnotation[] = {
&testcase_instance_TestTestMemCheckOffAnnotation_test_182,
&testcase_instance_TestTestMemCheckOffAnnotation_test_187,
0
};




static struct TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_200
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_200()
      : TESTNGPPST_NS::TestCase
        ( "fixture has been set to memcheck off, its tests all memcheck off"
        , "TestFixtureMemCheckOffAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 200)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureMemCheckOffAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureMemCheckOffAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_200()
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
      static const char* memCheckSwitch = "off";
      return memCheckSwitch;
   }

private:
   TestTestFixtureMemCheckOffAnnotation* belongedFixture;
} testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_200 ;



static struct TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_205
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_205()
      : TESTNGPPST_NS::TestCase
        ( "fixture has been set to memcheck off, its tests all memcheck off 2"
        , "TestFixtureMemCheckOffAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 205)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureMemCheckOffAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureMemCheckOffAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_205()
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
      static const char* memCheckSwitch = "off";
      return memCheckSwitch;
   }

private:
   TestTestFixtureMemCheckOffAnnotation* belongedFixture;
} testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_205 ;



static struct TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_211
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureMemCheckOffAnnotation_test_211()
      : TESTNGPPST_NS::TestCase
        ( "fixture has been set to memcheck off, its test can use memcheck on to open mem leak check"
        , "TestFixtureMemCheckOffAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 211)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureMemCheckOffAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureMemCheckOffAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_211()
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
      static const char* memCheckSwitch = "on";
      return memCheckSwitch;
   }

private:
   TestTestFixtureMemCheckOffAnnotation* belongedFixture;
} testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_211 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestFixtureMemCheckOffAnnotation[] = {
&testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_200,
&testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_205,
&testcase_instance_TestTestFixtureMemCheckOffAnnotation_test_211,
0
};




static struct TESTCASE_TestTestFixtureMemCheckOnAnnotation_test_223
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureMemCheckOnAnnotation_test_223()
      : TESTNGPPST_NS::TestCase
        ( "fixture has been set to memcheck on, its tests all memcheck on"
        , "TestFixtureMemCheckOnAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 223)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureMemCheckOnAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureMemCheckOnAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_223()
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
      static const char* memCheckSwitch = "on";
      return memCheckSwitch;
   }

private:
   TestTestFixtureMemCheckOnAnnotation* belongedFixture;
} testcase_instance_TestTestFixtureMemCheckOnAnnotation_test_223 ;



static struct TESTCASE_TestTestFixtureMemCheckOnAnnotation_test_232
   : public TESTNGPPST_NS::TestCase
{
   TESTCASE_TestTestFixtureMemCheckOnAnnotation_test_232()
      : TESTNGPPST_NS::TestCase
        ( "fixture has been set to memcheck on, its test can use memcheck off to close mem leak check"
        , "TestFixtureMemCheckOnAnnotation"
        , "TestMemChecker"
        , 0
        , "TestMemChecker.h"
        , 232)
   {}

   void setFixture(TESTNGPPST_NS::TestFixture* fixture)
   {
      if(fixture == 0)
      {
         belongedFixture = new TestTestFixtureMemCheckOnAnnotation();
      }
      else
      {
         belongedFixture = dynamic_cast<TestTestFixtureMemCheckOnAnnotation*>(fixture);
      }
   }

   void runTest()
   {
      
belongedFixture->test_232()
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
      static const char* memCheckSwitch = "off";
      return memCheckSwitch;
   }

private:
   TestTestFixtureMemCheckOnAnnotation* belongedFixture;
} testcase_instance_TestTestFixtureMemCheckOnAnnotation_test_232 ;



static TESTNGPPST_NS::TestCase* g_TESTCASEARRAY_TestTestFixtureMemCheckOnAnnotation[] = {
&testcase_instance_TestTestFixtureMemCheckOnAnnotation_test_223,
&testcase_instance_TestTestFixtureMemCheckOnAnnotation_test_232,
0
};




/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestMemChecker
   ( "TestMemChecker"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestTestMemChecker
   , (sizeof(g_TESTCASEARRAY_TestTestMemChecker)/sizeof(g_TESTCASEARRAY_TestTestMemChecker[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestGlocalVectorMemLeak
   ( "global vector"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestGlocalVectorMemLeak
   , (sizeof(g_TESTCASEARRAY_TestGlocalVectorMemLeak)/sizeof(g_TESTCASEARRAY_TestGlocalVectorMemLeak[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestMemberStringMemLeak1
   ( "member/global string 1"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestMemberStringMemLeak1
   , (sizeof(g_TESTCASEARRAY_TestMemberStringMemLeak1)/sizeof(g_TESTCASEARRAY_TestMemberStringMemLeak1[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestMemberStringMemLeak2
   ( "member/global string 2"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestMemberStringMemLeak2
   , (sizeof(g_TESTCASEARRAY_TestMemberStringMemLeak2)/sizeof(g_TESTCASEARRAY_TestMemberStringMemLeak2[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestMemCheckOffAnnotation
   ( "TestMemCheckOffAnnotation"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestTestMemCheckOffAnnotation
   , (sizeof(g_TESTCASEARRAY_TestTestMemCheckOffAnnotation)/sizeof(g_TESTCASEARRAY_TestTestMemCheckOffAnnotation[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestFixtureMemCheckOffAnnotation
   ( "TestFixtureMemCheckOffAnnotation"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestTestFixtureMemCheckOffAnnotation
   , (sizeof(g_TESTCASEARRAY_TestTestFixtureMemCheckOffAnnotation)/sizeof(g_TESTCASEARRAY_TestTestFixtureMemCheckOffAnnotation[0])) - 1
   );



/*static*/ TESTNGPPST_NS::TestFixtureDesc test_fixture_desc_instance_TestTestFixtureMemCheckOnAnnotation
   ( "TestFixtureMemCheckOnAnnotation"
   , "TestMemChecker.h"
   , g_TESTCASEARRAY_TestTestFixtureMemCheckOnAnnotation
   , (sizeof(g_TESTCASEARRAY_TestTestFixtureMemCheckOnAnnotation)/sizeof(g_TESTCASEARRAY_TestTestFixtureMemCheckOnAnnotation[0])) - 1
   );



static TESTNGPPST_NS::TestFixtureDesc* array_of_fixture_desc_TestMemChecker[] = {
&test_fixture_desc_instance_TestTestMemChecker,
&test_fixture_desc_instance_TestGlocalVectorMemLeak,
&test_fixture_desc_instance_TestMemberStringMemLeak1,
&test_fixture_desc_instance_TestMemberStringMemLeak2,
&test_fixture_desc_instance_TestTestMemCheckOffAnnotation,
&test_fixture_desc_instance_TestTestFixtureMemCheckOffAnnotation,
&test_fixture_desc_instance_TestTestFixtureMemCheckOnAnnotation,
0
};




static TESTNGPPST_NS::TestSuiteDesc test_suite_desc_instance_TestMemChecker
   ( "TestMemChecker"
   , array_of_fixture_desc_TestMemChecker
   , (sizeof(array_of_fixture_desc_TestMemChecker)/sizeof(array_of_fixture_desc_TestMemChecker[0])) - 1
   );



extern "C" DLL_EXPORT TESTNGPPST_NS::TestSuiteDesc* ___testngppst_test_suite_desc_getter() {
   return &test_suite_desc_instance_TestMemChecker;
}


