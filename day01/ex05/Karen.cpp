#include"Karen.hpp"
Karen::Karen()
{
	levels[0]=&Karen::debug;
	levels[1]=&Karen::info;
	levels[2]=&Karen::warning;
	levels[3]=&Karen::error;
	levels[4]=&Karen::wrong_level;
	level_name[0]="DEBUG";
	level_name[1]="INFO";
	level_name[2]="WARNING";
	level_name[3]="ERROR";
}
Karen::~Karen()
{

}
void Karen::debug(void)
{
	std::cout<<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"<<std::endl;
}
void Karen::info(void)
{
	std::cout<<"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"<<std::endl;
}
void Karen::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." <<std::endl;
}
void Karen::error(void)
{
	std::cout<<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}
void Karen::wrong_level(void)
{
	std::cout<<"Wrong level"<<std::endl;
}
int Karen::find_level(std::string level)
{
	int i;

	i = 0;
	while(i<4)
	{
		if(level_name[i]==level)
			return(i);
		i++;
	}
	return(4);
}
void Karen::complain(std::string level)
{
	int level_number;

	level_number=this->find_level(level);
	(this->*levels[level_number])();
}