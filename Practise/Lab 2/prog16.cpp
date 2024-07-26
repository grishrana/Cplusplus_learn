#include <fstream>
#include <iostream>

int main() {
  std::string s;
  std::fstream file("firstfile.txt", std::ios::in);
  if (!file) {
    std::cout << "Failed to open the file\n";
    return 1;
  } else {
    while (std::getline(file, s)) {
      std::cout << s << std::endl;
    }
    std::cout << std::endl;
  }
  file.close();
  return 0;
}
