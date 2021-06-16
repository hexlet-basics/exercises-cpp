#include <iostream>
#include <string>

#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif


using namespace std;

int main() {
  FILE *fp;
  fp = popen("./solution.out", "r");
  string expected = "Hello, World!";
  char result[sizeof(expected)];  
  fgets(result, sizeof(result), fp);
  pclose(fp);

  ASSERT(result == expected,  "\nExpected: \"" + string(result) + "\" to be: \"" + expected +"\"");
}
