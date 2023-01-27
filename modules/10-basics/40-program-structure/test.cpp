#include "../../../include/output_stream_test.h"

int main() {
  FILE *fp;
  fp = popen("./solution.out", "r");
  std::string expected = "Hello, Code Basics!";
  char result[sizeof(expected)];
  fgets(result, sizeof(result), fp);
  pclose(fp);

  ASSERT(
    result == expected,
    "\nExpected: \"" + std::string(result) + "\" to be: \"" + expected +"\"");
}
