#include <iostream>

/*
This program is using constructor overloading. Constructor overloading refers to the use 
of multiple constructor in a class for various cases of initialization of objects.
*/

class std_info
{
private:
    int id;
    std::string name;
public:
    std_info(){}; //constructor

    std_info(std::string n, int i){ //constructor again
        id=i;
        name=n;
    }

    std_info(std_info &e){ //copy constructor
        id=e.id;
        name=e.name;
    }

    void display()
    {
        std::cout << name << "\t"<<id << std::endl;
    }
    
    ~std_info(){std::cout << "Deallocated the objects. \n";};
};

int main(){
    std_info A("Grish",12); // Object A is created and initialized
    std_info B(A);  //copy constructor is called
    std_info C=A; // copy constructor is called again
    
    std_info D; // D is created, not initialized
    /*
    This statement below will not invoke the copy constructor. However, if the the variables are objects. The statement
    is legal and simply assigns the values of A to D, member by memeber. This is the task of the overloaded assignment operator(=).
    */
    
    D=A; 
    std::cout << "A : ";
    A.display();
    std::cout << "B : ";
    B.display();
    std::cout << "C : ";
    C.display();
    std::cout << "D : ";
    D.display();
}
