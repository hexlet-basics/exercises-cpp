#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the sum function") {
  CHECK(SayHurrayThreeTimes() == "hurray! hurray! hurray!");
}
