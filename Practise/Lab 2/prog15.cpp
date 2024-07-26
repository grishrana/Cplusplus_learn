#include <fstream>
#include <ios>
#include <iostream>

int main() {
  std::fstream file("firstfile.txt", std::ios::out);
  if (!file) {
    std::cout << "Error while opening the file.!!\n";
  } else {
    file << "Hello BESE Students." << std::endl;
  }

  file.close();
}
