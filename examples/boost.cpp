#include <iostream>
#include <string>

#include "boost/algorithm/string.hpp"
#include <boost/math/special_functions/binomial.hpp>

using namespace boost;

int main(int argc, char *argv[]) {
  auto line = "0,1,2,3";
  std::vector<std::string> elems;
  split(elems, line, is_any_of(","));

  for (const auto e : elems) {
    std::cout << e << " " << std::stoi(e) << std::endl;
  }

  std::cout << "Binomial(52, 2) = " math::binomial_coefficient<double>(52, 2)
            << std::endl;
  return 0;
}
