#include <iostream>
int main()
{
	std::string str;
	std::string* stringPTR;
	std::string stringREF;
	str = "HI THIS IS BRAIN";
	stringREF=str;
	stringPTR = &str;
	std::cout << "the address of the stringREF using stringREF: " << &stringREF << std::endl;
	std::cout << "tringREF: " << stringREF << std::endl;
	std::cout << "the address of the stringREF using stringPTR: " << stringPTR << std::endl;
	std::cout << "tringPTR: " << *stringPTR << std::endl;
	return(0);
}