#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

std::string get_output(int size, std::string argsLine) {
  FILE *fp;
  std::string command = "./run_solution " + argsLine;
  fp = popen(command.c_str(), "r");
  std::string output = "";
  char result[size];
  while(fgets(result, sizeof(result), fp)) {
    output += result;
  }
  pclose(fp);

  return output;
}

std::string get_output(int size) {
  return get_output(size, "");
}
