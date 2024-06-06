#include <iostream>
/*
->Inline function is a function that is expanded in line when it is invoked. That is the compiler replaces the function call
  with the corresponding function code (something similar to macro expansion).
->Inline function merely sends a request, not a command, to the complier. The compiler may ignore this request if the function
  definition is too longor or too complicated and compile the function as a normal function.
->Inline expansion makes a program run faster because the overhead of a function call and return is eliminated. However, it makes 
  the program to take up more memory because the statements that define the inline functionare reproduced at each point where the
  function is called. So, a trade-off becomes necessary.
*/

inline int cube(int a){
	return (a*a*a);
}

int main(){
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	std::cout << "Cube: " << cube(n) << std::endl;
	return 0;
}
