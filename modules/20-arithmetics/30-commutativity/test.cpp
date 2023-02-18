#include "../../../include/output_stream_test.h"

int main() {
  FILE *fp;
  fp = popen("./solution.out", "r");
  std::string expected = "15\n2\n";
  std::string actual = "";
  char result[sizeof(expected)];

  while(fgets(result, sizeof(result), fp)) {
      actual += result;
    }
   pclose(fp);

  ASSERT(
    actual == expected,
    "\nExpected: \"" + actual + "\" to be: \"" + expected +"\"",
    actual);
}
