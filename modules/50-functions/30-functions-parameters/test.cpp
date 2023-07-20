#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the remainder function") {
  CHECK(Remainder(2) == 0);
  CHECK(Remainder(3) == 1);
}
