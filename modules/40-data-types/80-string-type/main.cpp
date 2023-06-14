#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  // BEGIN
  std::string domain { argv[1] };
  int length_domain = domain.length();
  std::cout << length_domain << std::endl;
  // END
  return 0;
}
