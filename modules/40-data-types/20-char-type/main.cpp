#include <iostream>

int main() {
  // BEGIN
  setlocale(LC_ALL, "");
  wchar_t symbol = L'Э';
  std::wcout << symbol << std::endl;
  return 0;
  // END
}
