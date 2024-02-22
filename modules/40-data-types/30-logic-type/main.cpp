#include <iostream>

int main(int argc, char *argv[]) {
  auto number { atol(argv[1]) };
  // BEGIN
  bool is_even = (number % 2) == 0;
  std::cout << is_even << std::endl;
  // END
  return 0;
}
