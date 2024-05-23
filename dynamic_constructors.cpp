#include <iostream>
#include <cstring>


/*
This program is using constructor overloading. Constructor overloading refers to the use 
of multiple constructor in a class for various cases of initialization of objects.
*/
//only for test case we are using char *{variable name} else we always use std::string.
class string{
    char *name;  //declaring a pointer name with data type char
    int length;

    public:
    string(){           //Constructor 1
        length=0;
        name = new char[length+1 ];        //intializing pointer name
    }

    string( char *s){
        length= strlen(s);
        name = new char[length + 1];
        strcpy(name,s);
    }

    void display(){
        std::cout << "Name: " << name << std::endl;
    }

    void join(string &a, string &b);

    ~string(){std::cout << "Deallocted the objects \n";}

};

void string::join(string &a,string &b){
    length=a.length+b.length;
    delete name;        //deleting the prevoius value stored at pointer name .
    name=new char[length + 1 ]; //reintializing the pointer name
    strcpy(name, a.name);
    strcat(name, b.name);
}

int main(){
    char *first = "Grish ";
    string name1(first), name2("Arbin "), name3("Shrestha"),s1,s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    s1.display();
    s2.display();
    name1.display();
    name2.display();
    name3.display();

    return 0;
}