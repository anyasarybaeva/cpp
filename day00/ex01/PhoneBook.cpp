#include"contact.hpp"
#include"PhoneBook.hpp"
int is_number(std::string phone_number)
{
	for (unsigned int i=0;i<phone_number.length();i++ )
	{
		if (std::isdigit(phone_number[i]) == false) 
		{
			return(0);
		}
	}
	return(1);
}
void PhoneBook::set_name()
{
	std::cout<<"NAME:";
	while(getline(std::cin, name[index]))
	{
		if(name[index].length()>0)
		{
			break;
		}
		std::cout<<"NAME:";
	}
}
void PhoneBook::set_last_name()
{
	std::cout<<"LAST NAME:";
	while(getline(std::cin, last_name[index]))
	{
		if(last_name[index].length()>0)
		{
			break;
		}
		std::cout<<"LAST NAME:";
	}
}
void PhoneBook::set_nickname()
{
	std::cout<<"NICKNAME:";
	while(getline(std::cin, nickname[index]))
	{
		if(nickname[index].length()>0)
		{
			break;
		}
		std::cout<<"NICKNAME:";
	}
}
void PhoneBook::set_phone_number()
{
	std::cout<<"PHONE NUMBER:";
	while(getline(std::cin, phone_number[index]) )
	{
		if(phone_number[index].length()>0 && is_number(phone_number[index])!=0 )
		{
			break;
		}
	std::cout<<"PHONE NUMBER:";
	}
}
void PhoneBook::set_darkest_secret()
{
	std::cout<<"DARKEST SECRET:";
	while(getline(std::cin, darkest_secret[index]))
	{
		if(darkest_secret[index].length()>0)
		{
			index++;
			index = index % 8;
			break;
		}
		std::cout<<"DARKEST SECRET:";
	}
}
std::string PhoneBook::get_name(int index)
{
	return(name[index]);
}
std::string PhoneBook::get_last_name(int index)
{
	return(last_name[index]);
}
std::string PhoneBook::get_nickname(int index)
{
	return(nickname[index]);
}
std::string PhoneBook::get_phone_number(int index)
{
	return(phone_number[index]);
}
std::string PhoneBook::get_darkest_secret(int index)
{
	return(darkest_secret[index]);
}
