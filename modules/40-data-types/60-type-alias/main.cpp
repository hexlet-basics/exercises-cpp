#include <iostream>

int main() {
  // BEGIN
  using volts = int;
  using amperу = int;
  using watt = int;

  volts voltage { 220 };
  amperу amperage { 16 };

  watt power { voltage * amperage };
  std::cout << power << std::endl;
  // END
}
