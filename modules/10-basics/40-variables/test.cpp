#include "main.cpp"

TEST_CASE("testing the sum function") {
    CHECK_EQ(sum(1, 1), 2);
    CHECK_EQ(sum(2, -1), 1);
    CHECK_NE(sum(2, 3), 6);
}
