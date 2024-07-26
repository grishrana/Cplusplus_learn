#include "iostream"
#include <cstring>

class string {
  char *name;
  int len;

public:
  string() {}

  string(char *n) {
    len = strlen(n);
    name = new char[len];
    strcpy(name,n);
  }

  friend string operator+(string a, string b) {
    string temp;
    temp.len = a.len + b.len;
    temp.name = new char[temp.len];
    temp.name = strcat(a.name, b.name);
    return temp;
  }
  void display() { std::cout << name << "\n"; }
};

int main() {
	string s="Hello "
  string s1 = {'N','e','w',' '};
  string s2 = {'Y','o','r','k'};
  string s3;

  std::cout << "S1 contains: ";
  s1.display();
  std::cout << "S2 contains: ";
  s2.display();
  s3 = s1 + s2;
  std::cout << "S3 contains: ";
  s3.display();

  return 0;
}
