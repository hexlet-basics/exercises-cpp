#include "test_helper.h"

TEST_CASE("testing solution") {
  std::string expected = "What Is Dead May Never Die\n";
  std::string actual = get_output(sizeof(expected));

  CHECK(actual == expected);
}
