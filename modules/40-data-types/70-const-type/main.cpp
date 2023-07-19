#include <iostream>

int main(int argc, char *argv[]) {
  using centimeters = double;
  centimeters radius { atof(argv[1]) };
  // BEGIN
  constexpr double kPi { 3.14 };

  std::cout << 2 * kPi * radius << std::endl;
  // END
}
