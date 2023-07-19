#include <iostream>

int main(int argc, char *argv[]) {
  auto number_of_second { atol(argv[1]) };
  // BEGIN
  int seconds_in_minute { 60 };
  int seconds_in_hour { 60 * seconds_in_minute };
  int seconds_in_day = { 24 * seconds_in_hour };

  std::cout << number_of_second
            << " "
            << "seconds = "
            << number_of_second / seconds_in_day
            << " days"
            << std::endl;
  // END
}
