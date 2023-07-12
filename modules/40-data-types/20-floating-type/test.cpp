#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "48.8636\n";
  std::string actual = get_output(sizeof(expected));

  CHECK(actual == expected);
}
