#include"HumanA.hpp"
HumanA::HumanA(std::string NAME,Weapon& WEAPON):name(NAME),weapon(WEAPON)
{

}
HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout<<name<<" attacks with his "<<weapon.get_type()<<std::endl;
}