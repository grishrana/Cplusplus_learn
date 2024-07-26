#include <iostream>

class staff{
protected:
	int staff_id;
	std::string name;

public:
	staff(std::string n, int id): name(n), staff_id(id){}
};

class lecturer: public staff{
	std::string subject;
	std::string department;

public:
	lecturer(std::string n, int id, std::string sub, std::string dept): staff(n,id), subject(sub), department(dept){}

	void display_info(){
		std::cout << "Staff Id: " << staff_id << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Subject: " << subject << std::endl;
		std::cout << "Department: " << department << std::endl;

	}
};
class administrative: public staff{
	std::string post;
	std::string department;

public:
	administrative(std::string n, int id, std::string p, std::string dept): staff(n,id){
		post = p;
		department = dept;
	}

	void display_info(){
		std::cout << "Staff Id: " << staff_id << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Post: " << post << std::endl;
		std::cout << "Department: " << department << std::endl;

	}
};


int main(){
	administrative a1("Uday Shetty",420,"Co-ordinator","Software Engineering");
	lecturer l1("Anup Acharya",50,"OOP in C++", "Software Engineering");
	std::cout << "Administrative: \n";
	a1.display_info();
	std::cout << "\nLecturer: \n";
	l1.display_info();
	return 0;
}
