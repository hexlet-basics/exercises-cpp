#include <iostream>

int main() {
  // BEGIN
  int summ_of_temperatures { 588 };
  int numbers_of_hours { 24 };

  int average_temperature { summ_of_temperatures / numbers_of_hours };

  std::cout << "Average daily temperature: "
            << average_temperature
            << std::endl;
  // END
}
