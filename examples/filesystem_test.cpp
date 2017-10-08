#include "boost/filesystem/operations.hpp"
#include "boost/filesystem/path.hpp"
#include <iostream>

namespace fs = boost::filesystem;

int main(int argc, char *argv[]) {
  fs::path p(fs::current_path());
  int file_count(0);
  int dir_count(0);
  int other_count(0);
  int err_count(0);

  if (fs::is_directory(p)) {
    std::cout << "\nIn directory: " << p << "\n\n";
    fs::directory_iterator end_iter;
    for (fs::directory_iterator dir_itr(p); dir_itr != end_iter; ++dir_itr) {
      try {
        if (fs::is_directory(dir_itr->status())) {
          ++dir_count;
          std::cout << dir_itr->path().filename() << " [directory]\n";
        } else if (fs::is_regular_file(dir_itr->status())) {
          ++file_count;
          std::cout << dir_itr->path().filename() << "\n";
        } else {
          ++other_count;
          std::cout << dir_itr->path().filename() << " [other]\n";
        }

      } catch (const std::exception &ex) {
        ++err_count;
        std::cout << dir_itr->path().filename() << " " << ex.what()
                  << std::endl;
      }
    }
    std::cout << "\n"
              << file_count << " files\n"
              << dir_count << " directories\n"
              << other_count << " others\n"
              << err_count << " errors\n";
  }
  return 0;
}
