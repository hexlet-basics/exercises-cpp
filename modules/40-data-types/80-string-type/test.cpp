#include "../../../include/output_stream_test.h"

int main() {
  FILE *fp;
  fp = popen("./solution.out code-basics", "r");
  std::string expected = "11\n";
  char result[sizeof(expected)];
  fgets(result, sizeof(result), fp);
  pclose(fp);

  ASSERT(
    result == expected,
    "\nExpected: \"" + std::string(result) + "\" to be: \"" + expected +"\"",
    result);
}
