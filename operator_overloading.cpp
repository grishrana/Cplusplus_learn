#include <iostream>

class data{
private:
	int x,y,z;

public:
	data(){}

	data(int a,int b, int c){
		x=a;
		y=b;
		z=c;
	}

	void operator -() //unary operator overloading
	{
		x=-x;
		y=-y;
		z=-z;
	}

	friend data operator +(data a,data b){ //binary operator overloading using friend function
		data temp;
		temp.x=a.x+b.x;
		temp.y=a.y+b.y;
		temp.z=a.z+b.z;
		return temp; // return data(a.x+b.x,a.y+b.y,a.z+b.z);
	}

	void display(){
		std::cout << x <<'\t'<<y<<'\t'<<z<<std::endl;
	}
};

int main(){
	data d1(1,2,3),d2(4,5,6),d3;

	std::cout << "Before unary minus: ";
	d1.display();
	-d1;
	std::cout << "After unary minus: ";
	d1.display();

	std::cout<<"Data 2: ";
	d2.display();

	std::cout << "After adding d1 and d2: ";
	d3=d1+d2;
	d3.display();


	

	return 0;
}
