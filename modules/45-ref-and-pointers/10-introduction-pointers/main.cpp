#include <iostream>
#include <string>

int main() {
  std::string domain_name { "code-basics" };
  std::string* memory_adress { &domain_name };
  // BEGIN
  std::cout << * memory_adress << std::endl;
  // END
  return 0;
}
