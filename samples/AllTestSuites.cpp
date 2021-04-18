#include <vector>
#include <string>

static const std::vector<std::string> __testngpp_all_test_suites{
    "sample"
};

extern "C" const std::vector<std::string>& ___testngpp_get_all_test_suites() {
   return __testngpp_all_test_suites;
}