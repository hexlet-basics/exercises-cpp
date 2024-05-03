#include <string>

// BEGIN
std::string GetFullName(std::string first_name, std::string last_name) {
  return first_name + " " + last_name;
}

std::string GetFullName() {
  return "Anonymous";
}
// END
