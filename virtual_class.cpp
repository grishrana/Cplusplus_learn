#include <iostream>

/*
All the public and protected members of 'student' are inherited into 'result' twice, first via 'test' and again via 
'eca'. This means, 'result' would have duplicate sets of the members inherited from 'student'. This introduces
ambiguity and should be avoided.

 When a class is made a virtual base class, C++ takes necessary care to see that only one copy of that class is inherited,
 regardless of how many inheritance paths exist between the virtual base class and a derived class.
 */

class student{
  protected:
  std::string name;
  public:
  void getname();
};

class test:public virtual student{
  protected:
  float marks;

  public:
  void getmarks();
};

class eca:public virtual student{
  protected:
    char grade;

  public:
    void getgrade();
};

class result:public test, public eca{
  private:
    std::string res;
  
  public:
    void displaydata(){
      res=(marks<45)?"Fail":"Pass";
      std::cout << name << "\t" << res << "\t" << grade << std::endl;
    }
};

void student::getname(){
  std::cout << "Enter name: ";
  std::getline(std::cin, name);
}

void test::getmarks(){
  std::cout << "Enter marks: ";
  std::cin >> marks;
}

void eca::getgrade(){
  std::cout << "Enter grade: ";
  std::cin >> grade;
}

int main(){
  result r1;
  r1.getname();
  r1.getmarks();
  r1.getgrade();
  r1.displaydata();
  return 0;
}
