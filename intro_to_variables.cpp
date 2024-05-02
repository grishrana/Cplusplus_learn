#include <iostream>

int main(){
    std::string name= "Grish Rana"; 
    int age= 17;
    char sex= 'M';
    double perc = 69.69; // we use double keyword for float values
    bool handsome= true;

    if (handsome){
        std::cout << "Name: " << name;
        std::cout << "\nAge: " << age;
        std::cout << "\nSex: " << sex;
        std::cout << "\nStud Percentage: " << perc << "%";
    }


    return 0;
}