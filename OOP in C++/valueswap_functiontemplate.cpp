#include <iostream>
template <class T1,class T2>
void swap(T1 a, T2 b){
	std::cout << "Non swapped value: " << a << "\t" << b <<std::endl;
	T1 temp = a;
	T2 a = b;
	T1 b = temp;
	std::cout << "Swapped value: " << a << "\t" << b << std::endl;
}

int main(){
	swap(36,6.9);
	return 0;
}
