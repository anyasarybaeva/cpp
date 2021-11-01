#include"types.hpp"

bool is_char(std::string const str)
{
	return(str.length()==1 && std::isalpha(str[0]));
}

bool is_int(std::string const str)

{
	int i; 
	
	i = 0;
	if((str[i] == '-' || str[i] == '+') && str[i+1]) 
		i++;
	while(str[i])
	{
		if(std::isdigit(str[i]))
			i++;
		else
			return false;
	}
	return true;
}

bool is_float(std::string const str)
{
	unsigned long i; 
	
	i = 0;
	if(str=="nan" || str=="+inf" || str=="-inf")
		return true;
	if((str[i] == '-' || str[i] == '+') && str[i+1]) 
		i++;
	if(str[str.length()-1]!='f')
		return false;
	while(i<str.length()-1)
	{
		if(std::isdigit(str[i]))
			i++;
		else if(str[i]=='.' && str[i+1] && std::isdigit(str[i+1]))
		{
			i++;
			while(i<str.length()-1)
			{
				if(std::isdigit(str[i]))
					i++;
				else 
					return false;
			}
			return true;
		}
		else
			return false;
	}
	return false;
}

bool is_double(std::string const str)
{
	unsigned long i; 
	
	i = 0;
	if(str=="nan" || str=="+inf" || str=="-inf")
		return true;
	if((str[i] == '-' || str[i] == '+') && str[i+1]) 
		i++;
	while(i<str.length()-1)
	{
		if(std::isdigit(str[i]))
			i++;
		else if(str[i]=='.' && str[i+1] && std::isdigit(str[i+1]))
		{
			i++;
			while(i<str.length()-1)
			{
				if(std::isdigit(str[i]))
					i++;
				else 
					return false;
			}
			return true;
		}
		else
			return false;
	}
	return false;
}