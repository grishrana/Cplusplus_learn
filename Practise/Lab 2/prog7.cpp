#include <iostream>

class data {
  int a;

public:
  data(int x) : a(x) {}
  void operator-() { a = -a; }
  void display() { std::cout << "Data: " << a << std::endl; }
};

int main() {
  data d1(4);
  d1.display();
  -d1;
  d1.display();
  return 0;
}
