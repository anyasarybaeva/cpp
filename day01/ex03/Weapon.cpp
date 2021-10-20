#include "Weapon.hpp"
Weapon::Weapon(std::string TYPE)
{
	type=&TYPE;
}
const std::string Weapon::get_type()
{
	return(*type);
}

void Weapon::setType(std::string TYPE)
{
	type=&TYPE;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}