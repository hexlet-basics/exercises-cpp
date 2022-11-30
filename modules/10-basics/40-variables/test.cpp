#include "main.cpp"

TEST_CASE("testing the sum function") {
    CHECK(sum(1, 1) == 2);
    CHECK(sum(2, -1) == 1);
    CHECK(sum(2, 3) != 6);
}
