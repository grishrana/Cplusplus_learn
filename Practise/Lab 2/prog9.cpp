#include <iostream>

class base {
public:
  virtual void show() { std::cout << "This is base class.\n"; }
};

class derived : public base {
public:
  void show() { std::cout << "This is derived class.\n"; }
};

int main() {
  base b, *bptr;
  derived d;

  bptr = &b;
  bptr->show();

  bptr = &d;
  bptr->show();

  return 0;
}
