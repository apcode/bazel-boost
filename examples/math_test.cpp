#include <iostream>

#include <boost/math/special_functions/binomial.hpp>

using namespace boost;

int main(int argc, char *argv[]) {
  std::cout << "binomial(52, 2) = "
            << boost::math::binomial_coefficient<double>(52, 2) << std::endl;
  return 0;
}
