#include"types.hpp"

void print_char(int number)
{
	std::cout<<"char:";
	if(std::isprint(number))
	{
		std::cout<<"'"<<static_cast<char>(number)<<"'"<<std::endl;
	}
	else if(isascii(number))
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"impossible"<<std::endl;
}

void print_char(double number)
{
	std::cout<<"char:";
	if(std::isprint(number))
	{
		std::cout<<"'"<<static_cast<char>(number)<<"'"<<std::endl;
	}
	else if(isascii(number))
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"impossible"<<std::endl;
}

void print_char(float number)
{
	std::cout<<"char:";
	if(std::isprint(number))
	{
		std::cout<<"'"<<static_cast<char>(number)<<"'"<<std::endl;
	}
	else if(isascii(number))
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"impossible"<<std::endl;
}