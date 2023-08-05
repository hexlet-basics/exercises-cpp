#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the GetHiddenCard function") {
  CHECK(GetHiddenCard("1234567812345678") == "****5678");
  CHECK(GetHiddenCard("1234567812345678", 3) == "***5678");
}
