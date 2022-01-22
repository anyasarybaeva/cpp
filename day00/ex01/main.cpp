#include <iostream>
#include "contact.hpp"
int main()
{
 	std::string command;
 	std::cout << "PhoneBook:";
 	contact contact_class;
	while (getline(std::cin, command))
 	{
  		if (command == "ADD")
  		{
   			contact_class.add_contact();
  		}
  		else if (command == "SEARCH")
  		{
			contact_class.get_phone_book();
			std::cout << "choose index"<< std::endl;
			while (getline(std::cin, command))
 			{
  				if(is_number(command) && command.length()==1 && std::stoi(command)>=0 && std::stoi(command)<=8)
				{
					contact_class.get_contact_info(std::stoi(command)-1);
					break;
				}
				std::cout<<"wrond index,try again"<<std::endl;
 			}	
  		}
  		else if (command == "EXIT")
  		{
			std::cout<< "exit" << std::endl;
			break;
		}
  		std::cout<< "PhoneBook:";
	}
}