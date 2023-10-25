// Jake Bowen
// jakeeb05@csu.fullerton.edu
// @JakeBowen2005
// Partners: @HarleenAhluwalia

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  bool first{true};
  double total{0};
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double num{std::stod(argument)};
    total += num;
  }
  double denominater{static_cast<double>(arguments.size() - 1)};
  double average = total / denominater;
  std::cout << "average = " << average;
  return 0;
}
