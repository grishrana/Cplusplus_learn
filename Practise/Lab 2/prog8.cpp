#include <iostream>

class memory {
  int bytes, kilobytes, megabytes;

public:
  memory() {}
  memory(int x) {
    megabytes = x / (1024 * 1024);
    kilobytes = (x % (1024 * 1024)) / 1024;
    bytes = x % 1024;
  }

  void display() {
    std::cout << megabytes << "MB " << kilobytes << "KB " << bytes << "bytes\n";
  }
};

int main() {
  memory m1;
  long int b;
  std::cout << "Enter no of bytes: ";
  std::cin >> b;
  m1 = b;
  m1.display();
  return 0;
}
