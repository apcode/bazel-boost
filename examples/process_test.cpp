#include <boost/process.hpp>
#include <iostream>

using namespace boost::process;

int main() {
  ipstream pipe_stream;
  child c("ls -lh", std_out > pipe_stream);

  std::string line;

  while (pipe_stream && std::getline(pipe_stream, line) && !line.empty())
    std::cerr << line << std::endl;

  c.wait();
}
