#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "10\n";
  std::string actual = get_output(sizeof(expected));

  CHECK(actual == expected);
}
