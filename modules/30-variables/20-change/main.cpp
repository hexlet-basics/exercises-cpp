#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int sum() {
  int num = 10;
  // BEGIN
  num += 1;
  // END
  return num;
}
