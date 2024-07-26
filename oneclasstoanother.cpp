#include <iostream>


class invent2;

class invent1{
	int items;
	std::string name;
public:
	invent1(){ }
	invent1(int i, std::string n): items(i),name(n) {};
	invent1(invent2 p){
		items = p.getitems();
		name=p.getname();
	}

	void display(){
		std::cout << "No of items: " << items<<"\tItem: " << name << std::endl;
	}
};


class invent2{
	int items;
	std::string name;
public:
	invent2(int i, std::string n): items(i),name(n) {};
	int getitems(){
		return items;
	}
	
	std::string getname(){
		return name;
	}

	void display(){
		std::cout << "No of items: " << items<<"\tItem: " << name << std::endl;
	}
};

int main(){
	invent1 i1;
	invent2 i2(5,"Bag of rice");
	std::cout << "Items of invent2 type: \n";
	i2.display();

	i1=i2;

	std::cout << "Items of invent1 type: \n";
	i1.display();

	return 0;
}

