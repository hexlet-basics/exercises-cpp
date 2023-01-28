#include <iostream>

int main() {
  // BEGIN
  int summ_of_temperatures = 588;
  int numbers_of_hours = 24;

  float average_temperature = static_cast<float>(summ_of_temperatures)
                              / numbers_of_hours;

  std::cout << "Average daily temperature: "
            << average_temperature;
  // END
}
