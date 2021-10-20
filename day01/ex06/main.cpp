#include"Karen.hpp"
int main()
{
	Karen kAreN;
	std::cout<<"--------------WARNING----------------"<<std::endl;
	kAreN.complain("WARNING");
	std::cout<<"--------------INFO----------------"<<std::endl;
	kAreN.complain("INFO");
	std::cout<<"--------------DEBUG----------------"<<std::endl;
	kAreN.complain("DEBUG");
	std::cout<<"--------------ERROR----------------"<<std::endl;
	kAreN.complain("ERROR");
	std::cout<<"--------------wrong input----------------"<<std::endl;
	kAreN.complain("bgbr");
	return(1);
}