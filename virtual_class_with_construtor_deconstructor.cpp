#include <iostream>

/*
 The construtors of a derived class should always call the constructor of its base class explicitly in its initialization list.
 This ensures that the base class's data memebers are properly initialized before the derived class's constructor starts executing.

 If the base class has a default constructor, then the derived class's constructor doesn't need to explicitly call it.

 If the derived class doesn't explicitly define a constructor, the compiler will provide a default constructor. This default 
 constructor will call the default constructor of the base class.
 */


class person{
  protected:
    std::string name;
    int age;

  public:
  person(std::string n, int a){
      name=n;
      age=a;
    }

  ~person(){
      std::cout << "person deconstructor called.\n";
    }
};

class social: public virtual person{
  protected:
    std::string nickname;

  public:
  social(std::string n,int a, std::string nick_n):person(n,a)
  {
    nickname=nick_n;
  }

  ~social(){
    std::cout << "Social deconstructor called.\n";
  }
  
};

class social_media:public virtual person{
  protected:
    std::string username;
    
  public:
    social_media(std::string n,int a,std::string usr):person(n,a)
    {
      username=usr;
    } 

    ~social_media(){
      std::cout << "Social_Media deconstructor called.\n";
    }
};

class personality:public social_media, public social{
  private:
    std::string persona;

  public:
    personality(std::string n, int a, std::string nick_n, std::string usr):person(n,a),social(n,a,nick_n),social_media(n,a,usr)
    {
      persona=(nick_n==usr)?"Great":"Fake";
    }

    void display_data(){
      std::cout <<"\nName: "<<name<<" Age: "<<age<<" Nickname: "<<nickname<<" Username: "<<username<<" Persona: "<<persona<<std::endl;
    }

    ~personality(){
      std::cout << "Personality deconstructor called.\n";
    }
};

int main(){
  std::string n,nick_n,usr;
  int age;
  std::cout << "Enter your name: ";
  std::getline(std::cin,n);
  std::cout <<"Enter your nickname: ";
  std::getline(std::cin,nick_n);
  std::cout << "Enter your username: ";
  std::cin >> usr;
  std::cout << "Enter your age: ";
  std::cin >> age;

  personality persona1(n,age,nick_n,usr);
  persona1.display_data();
  return 0;
}
