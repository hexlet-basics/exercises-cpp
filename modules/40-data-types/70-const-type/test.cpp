#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "3.14\n";
  std::string actual = get_output(sizeof(expected), "0.5");

  CHECK(actual == expected);
}
