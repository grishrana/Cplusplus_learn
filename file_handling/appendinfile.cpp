#include <iostream>
#include <fstream>

int main()
{
	std::fstream file("testnofile.txt",std::ios::app);
	
	if(!file){
		std::cout << "Unable to open file!!";
		return 1;
	}

	file << "Appended new line." << std::endl;
	return 0;
}
