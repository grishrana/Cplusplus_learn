#include <iostream>
/*
Overloading refers to the use of the same thing for different purposes. C++ also permits overloading of funcitons.
This means that we can use the same funcitons name to create functions that perform variety of different taske. This
is known as function polymorphism in oop.(compile time polymorphism)

 */

void print(int i);
void print(std::string i);
void print(char i);
void print(float i);

int main(){
	print(5);
	print("hello");
	print('v');
	print(6.9f); //6.9 by default in a double data type so converting into float datatype.
	return 0;
}

void print(int i){
	std::cout << i << std::endl;
}

void print(std::string i){
	std::cout << i << std::endl;
}

void print(float i){
	std::cout << i << std::endl;
}

void print(char i){
	std::cout << i << std::endl;
}
