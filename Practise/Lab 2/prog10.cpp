#include "iostream"

template <class T1, class T2> class data {
  T1 a;
  T2 b;

public:
  data(T1 x, T2 y) : a(x), b(y) {}
  void show() { std::cout << "Data: " << a << " " << b << std::endl; }
};

int main() {
  data<int, char> d1(5, 'c');
  d1.show();
}
