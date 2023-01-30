#include "../../../include/output_stream_test.h"

int main() {
  FILE *fp;
  fp = popen("./solution.out 31600000", "r");
  std::string expected = "31600000 seconds = 365 days\n";
  char result[sizeof(expected)];
  fgets(result, sizeof(result), fp);
  pclose(fp);

  ASSERT(
    result == expected,
    "\nExpected: \"" + std::string(result) + "\" to be: \"" + expected +"\"");
}
