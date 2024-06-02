#include <iostream>
/*
Is-A (Inheritance): Describes a relationship where a derived class inherits from a base class, indicating that the derived class is a type of the base class.
Has-A (Composition): Describes a relationship where a class contains an object of another class, indicating that the class has a member object of the other class. 

*/

class student{
  private:
    std::string name;

  public:
    void getname(){
      std::cout << "Enter name: ";
      std::getline(std::cin, name);
    }

    void display(){
      std::cout << name;
    }


};

class marks{
  private:
    float marks;
    student s1;

  public:
    void getdata(){
      s1.getname();
      std::cout << "Enter marks: ";
      std::cin >> marks;
    }

    void display(){
      s1.display();
      std::cout << "\t" <<marks << std::endl;
    }
};

int main(){
  marks m1;
  m1.getdata();
  m1.display();
  return 0;
}

