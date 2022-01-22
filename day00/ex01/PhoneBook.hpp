#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include<iostream>
class PhoneBook
{
	public:
		PhoneBook()
		{
			index=0;
		}
	   	void set_name();
		void set_last_name();
		void set_nickname();
		void set_phone_number();
		void set_darkest_secret();
		std::string get_name(int);
		std::string get_last_name(int);
		std::string get_nickname(int);
		std::string get_phone_number(int);
		std::string get_darkest_secret(int);
	private:
		int index;
		std::string name[8];
		std::string last_name[8];
		std::string nickname[8];
		std::string phone_number[8];
		std::string darkest_secret[8];
};
int is_number(std::string phone_number);
#endif
