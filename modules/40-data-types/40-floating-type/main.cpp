#include <iostream>
#include <iomanip>

int main() {
  // BEGIN
  float f_consumption_gasoline { 8.8 };
  int volume_tank { 43 };
  double d_distance = volume_tank * 10 / f_consumption_gasoline;
  std::cout << d_distance << std::endl;
  // END
}
