#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "1\n";
  std::string actual = get_output(sizeof(expected), "4");

  CHECK(actual == expected);
}
