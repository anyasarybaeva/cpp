#include"PhoneBook.hpp"
#include"contact.hpp"
void print_info(std::string info)
{
 	int index;
 	index = 0;
 	if ((info.length()) > 9)
 	{
  		while (index < 9)
  		{	
   			std::cout<< info[index++] ;
  		}
  		std::cout<< ".|" ;
 	}
 	else
 	{	
		index=10-info.length();
		while(index-->0)
		{
			std::cout<<" ";
		}
  		std::cout<< info;
		std::cout<<"|";
 	}
}
void contact::add_contact()
{
 	PB.set_name();
 	PB.set_last_name();
 	PB.set_nickname();
	PB.set_phone_number();
 	PB.set_darkest_secret();
}
void contact::get_contact_info(int index)
{
	if(PB.get_name(index).length()==0)
		return;
	std::cout<<PB.get_name(index)<<std::endl;
	std::cout<<PB.get_last_name(index)<<std::endl;
	std::cout<<PB.get_nickname(index)<<std::endl;
	std::cout<<PB.get_phone_number(index)<<std::endl;
	std::cout<<PB.get_darkest_secret(index)<<std::endl;
}
void contact::get_phone_book()
{
	int index;
 	std::string search_index;
 	index = 0;
 	std::cout << "|     index|first name| last name|  nickname|"<< std::endl;
 	while (index < 8)
 	{
  		std::cout<<"|         "<<index+1<<"|";
		print_info(PB.get_name(index));
  		print_info(PB.get_last_name(index));
  		print_info(PB.get_nickname(index++));
  		std::cout << std::endl;
 	}
}
