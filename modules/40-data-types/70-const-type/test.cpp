#include "../../../include/output_stream_test.h"

int main() {
  FILE *fp;
  fp = popen("./solution.out 0.5", "r");
  std::string expected = "3.14\n";
  std::string actual = "";
  char result[sizeof(expected)];

 fgets(result, sizeof(result), fp);
  pclose(fp);

  ASSERT(
    result == expected,
    "\nExpected: \"" + std::string(result) + "\" to be: \"" + expected +"\"",
    result);
}
