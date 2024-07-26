#include <iostream>

class data2;
class data1 {
  int i;

public:
  data1(int x) : i(x) {}
  friend void greatest(data1 obj1, data2 obj2);
};

class data2 {
  int i;

public:
  data2(int x) : i(x) {}
  friend void greatest(data1 obj1, data2 obj2);
};

void greatest(data1 obj1, data2 obj2) {
  if (obj1.i > obj2.i) {
    std::cout << "Data1 has greatest.\n";
  } else {
    std::cout << "Data2 has greatest. \n";
  }
}

int main() {
  data1 d1(5);
  data2 d2(10);
  greatest(d1, d2);
  return 0;
}
