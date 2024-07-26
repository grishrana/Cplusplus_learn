#include <iostream>
#include <fstream>

int main()
{
	std::fstream file("test.txt",std::ios::in);
	
	if(!file)
	{
		std::cout << "Unable to open file\n";
		return 1;
	}

	std::string data;
	std::cout << "Data on file: \n";
	while(std::getline(file,data))
	{
		std::cout << data << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
