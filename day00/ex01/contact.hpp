
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include"PhoneBook.hpp"
#include<iostream>
class contact
{
	public:
	   	void get_contact_info(int);
		void get_phone_book();
		void add_contact();
	private:
		PhoneBook PB;
};
#endif