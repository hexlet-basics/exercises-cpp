#include "test_helper.h"
#include "main.cpp"

TEST_CASE("testing the GetFullName function") {
  CHECK(GetFullName("John", "Dohe") == "John Dohe");
  CHECK(GetFullName() == "Anonymous");
}
