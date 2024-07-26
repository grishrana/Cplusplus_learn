#include <iostream>

class base {
public:
  void show() { std::cout << "This is base show function with no args\n"; }

  void show(int x) {
    std::cout << "This is a base show function with argument.\n";
  }

  virtual void display() { std::cout << "This is base class display.\n"; };
};

class derived : public base {
public:
  void display() { std::cout << "This is derived display via runtime\n"; }
};

int main() {
  base b, *bptr;
  derived d;

  bptr = &b;
  bptr->show();
  bptr->show(3);

  bptr = &d;
  bptr->display();

  return 0;
}
