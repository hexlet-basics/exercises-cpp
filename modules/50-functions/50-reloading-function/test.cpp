#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the Cube function") {
  CHECK(Cube(3)  == 27);
  REQUIRE(Cube(3.2f) == doctest::Approx(32.786).epsilon(0.01));
}
