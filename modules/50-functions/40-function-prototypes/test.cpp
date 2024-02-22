#include "test_helper.h"

TEST_CASE("testing prototipe function") {
  std::string expected = "11\n";
  std::string actual = get_output(sizeof(expected));

  CHECK(actual == expected);
}
