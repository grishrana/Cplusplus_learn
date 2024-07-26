#include <iostream>

class shape {
protected:
  float base, height;

public:
  void get_data() {
    std::cout << "Enter base and height: ";
    std::cin >> base >> height;
  }
  virtual void area() = 0;
};

class triangle : public shape {
public:
  void area() {
    float area = 0.5 * base * height;
    std::cout << "Area of given triangle: " << area << std::endl;
  }
};

class rectangle : public shape {
public:
  void area() {
    float area = base * height;
    std::cout << "Area of given rectangle: " << area << std::endl;
  }
};

int main() {
  shape *bptr;
  triangle t1;
  rectangle r1;

  bptr = &t1;
  bptr->get_data();
  bptr->area();

  bptr = &r1;
  bptr->get_data();
  bptr->area();
  return 0;
}
