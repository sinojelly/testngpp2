
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <errno.h>

#include <testngpp/runner/TestRunner.h>
#include <testngpp/utils/OptionList.h>
#include <testngpp/utils/StringList.h>
#include <testngpp/runner/ResourceCheckPoint.h>
#include <testngpp/comm/ExceptionKeywords.h>

#include <testngpp/internal/MemChecker.h>

#include "../utils/clipp.h"
using namespace clipp;

extern "C" const std::vector<std::string>& ___testngpp_get_all_test_suites();

USING_TESTNGPP_NS

////////////////////////////////////////////////////////////
struct Options{
    // Testcase Selection
    std::vector<std::string> filterFixtures{};
    std::string filterTags{"*"};

    // Output Configuration
    std::string output="stdout";
    bool colourful = false;
    bool showSuite = false;
    bool showFixture = false;
    bool showTags = false;
    bool verbose = true;
    int outputLevel = 0;

    // Execution Configuration 
    bool memCheck = false;
}options;

void parse_args(int argc, char* argv[]) {
    auto cli = (
        repeatable(option("--filter-fixtures") & value("fixture name", options.filterFixtures)),
        option("--filter-tags") & value("tag", options.filterTags),
        option("-o", "--output") & value("output", options.output) 
           & option("-c").set(options.colourful) & option("-s").set(options.showSuite)
           & option("-f").set(options.showFixture) & option("-t").set(options.showTags) 
           & option("-v").set(options.verbose) & (option("-l") & value("output level", options.outputLevel)),
        option("-m", "--no-memcheck").set(options.memCheck)
    );

    if (!parse(argc, argv, cli)) {
        std::cout << make_man_page(cli, argv[0]);
        exit(1);
    }
}

////////////////////////////////////////////////////////////
static
void getSpecifiedFixtures( StringList& fixtures)
{
   for (const auto& item : options.filterFixtures) {
       fixtures.add(item);
   }
}

////////////////////////////////////////////////////////////
static
bool useMemChecker()
{
    // return !options.memCheck;
   return false; // MinGW does not support memchecker, so compile the .a not use memchecker
}

////////////////////////////////////////////////////////////
static
void getListenerOptions(StringList& list) 
{
   if (options.output == "stdout") {
      std::string listener = "testngppstdoutlistener";
      if (options.colourful) {
         listener = listener + " -c";
      }
      if (options.showSuite) {
         listener = listener + " -s";
      }
      if (options.showFixture) {
         listener = listener + " -f";
      }
      if (options.showTags) {
         listener = listener + " -t";
      }
      if (options.verbose) {
         listener = listener + " -v";
      }
      if (options.outputLevel != 0) {
         listener = listener + " -l " + std::to_string(options.outputLevel);
      }
      list.add(listener);
   }
}

////////////////////////////////////////////////////////////
int real_main(int argc, char* argv[])
{
   if (argc > 1) {
       parse_args(argc, argv);
   }
   
   StringList listeners;
   getListenerOptions(listeners);
   StringList searchingPathsOfListeners;

   StringList fixtures;
   getSpecifiedFixtures(fixtures);

   MemChecker::setGlobalOpen(useMemChecker());
   
   std::string tagsFilterOption = options.filterTags;
   StringList suites;
   const std::vector<std::string>& allSuites = ___testngpp_get_all_test_suites();
   for (auto item : allSuites) {
       suites.add(item);
   }
   return TestRunner().runTests(false, 0, suites, listeners
                         , searchingPathsOfListeners, fixtures, tagsFilterOption);
}

int main(int argc, char* argv[])
{
   #ifndef __clang__
   TESTNGPP_RCP rcp = TESTNGPP_SET_RESOURCE_CHECK_POINT();
   #endif

   int code = 0;

   try
   {
     code = real_main(argc, argv);
     #ifndef __clang__
     TESTNGPP_VERIFY_RESOURCE_CHECK_POINT(rcp);
     #endif
   }
   catch(std::exception& error)
   {
      std::cerr << error.what() << std::endl;
   }
   catch(...)
   {
      std::cerr << "unknown exception" << std::endl;
   }
  
   return code;
}

