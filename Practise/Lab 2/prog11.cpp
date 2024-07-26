#include <iostream>
#include <stack>

int main() {
  std::stack<char> data;
  data.push('H');
  data.push('E');
  data.push('L');
  data.push('L');
  data.push('O');
  std::cout << data.top(); // O
  data.pop();
  std::cout << data.top(); // L
  data.pop();
  std::cout << data.top(); // L
  data.pop();
  std::cout << data.top(); // E
  data.pop();
  std::cout << data.top() << std::endl; // H
  data.pop();
  return 0;
}
