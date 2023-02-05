#include <iostream>
#include <iomanip>

int main() {
  float f_consumption_gasoline { 8.8 };
  int volume_tank { 43 };
  double result = volume_tank * 10 / f_consumption_gasoline;
  std::cout << result << std::endl;
}
