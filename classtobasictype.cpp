#include <iostream>

class vector{
private:
	float real;
	float imag;

public:

	vector(){};

	vector(float r, float i=0){
		real =r;
		imag =i;
	}
	
	operator int(){
		return real;
	}

	void display(){
		std::cout << "Data stored on Vector: " << real << std::endl;
	}
};

int main(){
	vector v1(5.0);
	int real_part;
	real_part=v1;
	v1.display();
	std::cout << "Int of Vector: " << real_part<<std::endl;
	return 0;
}
