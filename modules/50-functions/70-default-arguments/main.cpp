#include <string>

// BEGIN
std::string GetHiddenCard(std::string card_number, int stars_count = 4) {
  std::string plug { std::string(stars_count, '*') };
  std::string visible_digits_line {
    card_number.substr(card_number.length() - 4, 4)
  };
  return  plug + visible_digits_line;
}
// END
