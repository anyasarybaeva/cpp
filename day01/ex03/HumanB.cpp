#include"HumanB.hpp"
HumanB::HumanB(std::string NAME):name(NAME)
{
}
HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout<<name<<" attacks with his "<<weapon->get_type()<<std::endl;
}
void HumanB::setType(std::string TYPE)
{
	weapon->setType(TYPE);
}
void  HumanB::setWeapon(Weapon& WEAPON)
{
	weapon=&WEAPON;
}

