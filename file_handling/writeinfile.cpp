#include <fstream>
#include <iostream>
int main() {
  std::fstream file("test.txt", std::ios::out);

  if (!file) {
    std::cerr << "failed to open file for writing";
    return 1;
  }
  file << "This is a testline." << std::endl;
  file << "This is another test line." << std::endl;
  file.close();
  return 0;
}
