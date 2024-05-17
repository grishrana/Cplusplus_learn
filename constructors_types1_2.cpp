#include <iostream>

/*
    Constructors are special member functions of a class that are automatically called
    when an object is instantiated. Its main purpose is to initialize objects. It doesn't 
    have a return type.
    
    There are 7 types:
    1. Default Constructor: Initializes objects without arguments.
    2. Parameterized Constructor: Initializes objects with specific values.
    3. Copy Constructor: Initializes objects using another objects of the same class.
    4. Move constructor: Transfers Resources from temporary objects, enhancing performance.
    5. Defaulted/Deleted Constructor: Controls complier-generated constructors.
    6. Delegating/Deleted Constructor: Uses other constructors to perform initialization.
    7. Explicit constructors: Prevents implicit conversions and copy initialization.
*/

//default constructor example:
class car_info{
    private:
        std::string name;
        int modelno;
        float price;

    public:
    car_info(){ //This is a default constructor as no argument is passed.
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter model number: ";
        std::cin >> modelno;
        std::cout << "Enter price: ";
        std::cin >> price;
    }

    void display_info(){
        std::cout << "\nName: " << name << "\tModelNo: " << modelno << "\tPrice: " << price << std::endl;
    }
};

//parameterized example:
class  book_info
{
    private:
    int isbn;
    std::string name;
    float price;

    public:
    book_info(std::string , int, float);
    void display_info();

};

//Also can be defined inside the class.
book_info::book_info(std::string n, int i, float f){
    name=n;
    isbn=i;
    price=f;

}

void book_info::display_info(){
    std::cout << "\nName: " << name <<"\tISBN: " << isbn << "\tPrice: " << price << std::endl;
}

int main(){
    car_info car1; //default constructor
    car1.display_info();

    book_info book1("Naulo BIhani", 234523, 499.69); //Parameterized Constructor
    book1.display_info();

    return 0;
}