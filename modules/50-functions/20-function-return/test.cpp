#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the cube function") {
  CHECK(SayHurrayThreeTimes() == "hurray! hurray! hurray!");
}
