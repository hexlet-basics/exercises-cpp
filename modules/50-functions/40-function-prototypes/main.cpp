#include <iostream>
#include <string>

// BEGIN
int GetLength(std::string);
//END

int main() {
  int length = GetLength("Code Basics");
  return 0;
}

int GetLength(std::string str) {
  return str.length();
}
