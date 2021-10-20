#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>
class Weapon
{
private:
	std::string* type;	
public:
	Weapon();
	Weapon(std::string);
	~Weapon();
	const std::string get_type();
	void setType(std::string);
};


#endif