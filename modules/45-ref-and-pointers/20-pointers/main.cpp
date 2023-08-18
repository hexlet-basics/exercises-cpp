#include <iostream>
#include <string>

int main() {
  int first_num { 2 };
  int second_num { 3 };
  int* ptr_first { &first_num };
  int* ptr_second { &second_num };
  // BEGIN
  int tmp { *ptr_first };
  *ptr_first = *ptr_second;
  *ptr_second = tmp;
  // END
  std::cout <<  *ptr_first << std::endl;
  std::cout <<  *ptr_second << std::endl;

  return 0;
}
