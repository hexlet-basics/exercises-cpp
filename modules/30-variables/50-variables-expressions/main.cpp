#include <iostream>

int main() {
  int euros_count = 100;
  // BEGIN
  auto dollars_per_euro { 1.25 };
  int rubles_per_dollar { 60 };

  auto dollars_count { euros_count * dollars_per_euro };
  std::cout << dollars_count << std::endl;
  auto rubles_count { dollars_count * rubles_per_dollar };
  std::cout << rubles_count << std::endl;
  // END
}
