#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "31600000 seconds = 365 days\n";
  std::string actual = get_output(sizeof(expected), "31600000");

  CHECK(actual == expected);
}
