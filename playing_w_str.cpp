#include <iostream>

int main(){
    
    std::string name,addr;
    int age;

    std::cout << "Enter your full name: ";
    // std::cin >> name; if we take the string input like this then string will not take input after whitespace so lets use. getline() function.
    std::getline(std::cin, name);  //this line of code now can take whitespace as an input

    std::cout << "Enter your age: ";
    std::cin >> age;

    /*
    So if we take an char or string as an input just after another int or float. There will be an '\n' new line character at the input buffer and we don't pick up 
    the new line character. When we get in the getline() function it accepts the '\n' new line buffer.
    
    std::cout << "Enter your address: ";
    std::getline(std::cin, addr);

    So to prevent that from happening we can make a little change in getline() function:
    */

    std::cout << "Enter your address: ";
    std::getline(std::cin >> std::ws, addr); // `std::ws` will remove any white spaces or new line character. before any user input
    

    std::cout << "Hello " << name;
    std::cout << "\nYou are " << age << " years old.\n";
    std::cout << "You are from " << addr << std::endl;
}
