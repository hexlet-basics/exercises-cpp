#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the remainder function") {
  CHECK(remainder(2) == 0);
  CHECK(remainder(3) == 1);
}
