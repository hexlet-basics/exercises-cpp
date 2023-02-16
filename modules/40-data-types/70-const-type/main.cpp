#include <iostream>

int main() {
  // BEGIN
  using centimeters = double;
  constexpr double kPi = 3.14;
  centimeters radius = 0.5;

  std::cout << 2 * kPi * radius << std::endl;
  // END
}
