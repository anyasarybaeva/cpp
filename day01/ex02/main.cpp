#include <iostream>
int main()
{
	std::string* stringPTR=new std::string;
	std::string stringREF;
	stringREF = "HI THIS IS BRAIN";
	stringPTR = &stringREF;
	std::cout << "the address of the stringREF using stringREF: " << &stringREF << std::endl;
	std::cout << "tringREF: " << stringREF << std::endl;
	std::cout << "the address of the stringREF using stringPTR: " << stringPTR << std::endl;
	std::cout << "tringPTR: " << *stringPTR << std::endl;
	return(0);
}