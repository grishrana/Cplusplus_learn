#include <iostream>

void test(int x) {
  try {
    if (x == 1) {
      throw 1;
    } else if (x == 0) {
      throw 1.1;
    } else {
      throw 'x';
    }
  } catch (int e) {
    std::cout << "Caught an integer.\n";
  } catch (double e) {
    std::cout << "Caught a double\n";
  } catch (char e) {
    std::cout << "Caught a char\n";
  }
}

int main() {
  test(1);
  test(0);
  test(-1);
  return 0;
}
