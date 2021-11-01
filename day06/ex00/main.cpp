#include"types.hpp"



void change_type(std::string const str)
{
	if(is_char(str))
	{
		std::cout<<"char:"<<str<<std::endl;
		std::cout<<"int:"<< static_cast<int>(str[0])<<std::endl;
		std::cout<<"float:"<<static_cast<float>(str[0])<<".0f"<<std::endl;
		std::cout<<"double:"<<static_cast<double>(str[0])<<".0"<<std::endl;
	}
	else if(is_int(str))
	{
		long int number = std::strtol(str.c_str(), nullptr,10);
		if(number>2147483647 || number<-2147483648)
			throw std::exception();
		print_char((int)number);
		std::cout<<"int:"<< number<<std::endl;
		std::cout<<"float:"<<static_cast<float>(number)<<".0f"<<std::endl;
		std::cout<<"double:"<<static_cast<double>(number)<<".0"<<std::endl;
	}
	else if(is_float(str))
	{
		long double number1 = std::strtold(str.c_str(), nullptr);
		if(number1>3.402823e+38 || number1<-3.402823e+38)
			throw std::exception();
		float number = std::strtof(str.c_str(), nullptr);
		print_char((float)number);
		if (str=="nan" || str=="-inf" ||str=="+inf" || number>2147483647 ||number<-2147483648)
			std::cout<<"int:"<<"impossible"<<std::endl;
		else
			std::cout<<"int:"<< static_cast<int>(number)<<std::endl;
		if(number-(int)number!=0)
			std::cout << "Float: "<< static_cast<float> (number) << "f" <<std::endl;
		else
			std::cout << "Float: "<< static_cast<float> (number) << ".0f" <<std::endl;
		if(number-(int)number!=0)
			std::cout<<"double:"<<static_cast<double>(number)<<std::endl;
		else
			std::cout<<"double:"<<static_cast<double>(number)<< ".0" <<std::endl;
	}
	else if(is_double(str))
	{
		long double number1 = std::strtold(str.c_str(), nullptr);
		if(number1>3.402823e+38 || number1<-3.402823e+38)
			throw std::exception();
		double number = std::strtod(str.c_str(), nullptr);
		print_char(number);
			if (str=="nan" || str=="-inf" ||str=="+inf" || number>2147483647 ||number<-2147483648)
			std::cout<<"int:"<<"impossible"<<std::endl;
		else
			std::cout<<"int:"<< static_cast<int>(number)<<std::endl;
		if(number-(int)number!=0)
			std::cout << "Float: "<< static_cast<float> (number) << "f" <<std::endl;
		else
			std::cout << "Float: "<< static_cast<float> (number) << ".0f" <<std::endl;
		if(number-(int)number!=0)
			std::cout<<"double:"<<number<<std::endl;
		else
			std::cout<<"double:"<<number<< ".0" <<std::endl;
		
	}
	else
	{
		std::cout<<"wrong type"<<std::endl;
	}
}
int main(int argc, char **argv)
{
	if (argc!=2)
	{
		std::cout<<"Wrong number of arg"<<std::endl;
		return(1);
	}
	try
	{
		change_type(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cout<<"wrong type"<<std::endl;
	}
	return(1);
}