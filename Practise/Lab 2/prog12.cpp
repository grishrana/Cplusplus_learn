#include <iostream>

template <class T1> void sort(T1 *arr, int size) {
  T1 temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (*(arr + i) > *(arr + j)) {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  }
  std::cout << "Sorted Array: \n[\t";
  for (int i = 0; i < size; i++) {
    std::cout << *(arr + i) << "\t";
  }
  std::cout << "]\n";
}
int main() {
  int array1[5] = {4, 5, 34, 6, 34};
  float array2[4] = {1, 6.7, 4.3, 6.4};

  sort(array1, 5);
  sort(array2, 4);

  return 0;
}
