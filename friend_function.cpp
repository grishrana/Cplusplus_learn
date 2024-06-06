#include <iostream>
/*
The function declaration should be preceded by the keyword friend. The function is defined elsewhere in the program like a normal
C++ function. The function definition does not use either the keyword friend or the scope operator `::`. The functions that are 
declared with the keyword friend are known are friend functions. A function can be declared as a friend in any number of classes.
A friend funtion, although not a member function, has full access rights to the private memebers of the class.It is not in the 
scope of the class to which it has been declared as friend that mean friend function can be declared either private or public it 
doesn't even matter.
*/
class engineer;

class doctor{
	float salary;
	friend void get_tax(doctor obj1, engineer obj2);

public:
	doctor(){
		std::cout << "Enter salary: ";
		std::cin >> salary;
	}
};

class engineer{
	float salary;
public:
	friend void get_tax(doctor obj1, engineer obj2);
	engineer(){
		std::cout << "Enter salary: ";
		std::cin >> salary;
	}
};

void get_tax(doctor obj1, engineer obj2){
	std::cout << "\nDoctor's tax: " << (obj1.salary * 0.1);
	std::cout << "\nEngineer's tax: " << (obj2.salary * 0.1)<<std::endl;
}

int main(){
	doctor d1;
	engineer e1;
	get_tax(d1,e1);
	return 0;
}

