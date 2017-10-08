#include <boost/tokenizer.hpp>
#include <iostream>
#include <string>

int main() {
  std::string s = "This is,  a test";
  boost::tokenizer<> tok(s);
  for (const auto &word : tok) {
    std::cout << word << '\n';
  }
  return 0;
}
