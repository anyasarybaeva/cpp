#ifndef KAREN_HPP
#define KAREN_HPP
#include<iostream>
#include<string>
class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void wrong_level(void);
		void (Karen::*levels[5])(void);
		int find_level(std::string);
		std::string level_name[4];
	public:
		Karen();
		~Karen();
		void complain(std::string);
};
#endif