#include <iostream>

int main() {
  int euros_count = 100;
  // BEGIN
  float f_dollars_per_euro { 1.65 };
  int rubles_per_dollar { 60 };

  float f_dollars_count {
      static_cast<float>(euros_count) * f_dollars_per_euro
    };
  std::cout << f_dollars_count << std::endl;
  float f_rubles_count {
      f_dollars_count * static_cast<float>(rubles_per_dollar)
    };
  std::cout << f_rubles_count << std::endl;
  // END
}
