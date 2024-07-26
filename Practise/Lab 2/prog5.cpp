#include <iostream>

/*
 WAP to demonstrate inheritance
 */

class base{
public:
  void showb(){
    std::cout << "This is a base class member function." << std::endl;
  }
};

class derived: public base{
public:
  void showd(){
    std::cout << "This is a derived class member function." << std::endl;
  }
};

int main () {
  derived d;
  d.showb();
  d.showd();
  return 0;
}
