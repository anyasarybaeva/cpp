#include"whatever.hpp"

template <typename T>
void swap(T& a,T& b)
{
	T tmp = a;
    a = b; 
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if(a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b)
{
	if(a > b)
		return a;
	else
		return b;
}
int main()
{
	std::cout<<"-----------------------swap-----------------------"<<std::endl;
	int  a;
	int b;

	a = 5;
	b = 8;
	
	std::cout<<"a:"<<a<<" b:"<<b<<std::endl;
	swap(a, b);
	std::cout<<"a:"<<a<<" b:"<<b<<std::endl;
	
	double a1;
	double b1;
	
	a1 = 12.32;
	b1 = 7182.1;
	
	std::cout<<"a1:"<<a1<<" b1:"<<b1<<std::endl;
	swap(a1, b1);
	std::cout<<"a1:"<<a1<<" b1:"<<b1<<std::endl;
	
	std::string a2="first";
	std::string b2="second";

	std::cout<<"a2:"<<a2<<" b2:"<<b2<<std::endl;
	swap(a2, b2);
	std::cout<<"a2:"<<a2<<" b2:"<<b2<<std::endl;
	
	std::cout<<"-----------------------min-----------------------"<<std::endl;
	std::cout<<min(12.3f, 13.3f)<<std::endl;
	std::cout<<min(233, 0)<<std::endl;
	std::cout<<min(-128888881223, 85445559247)<<std::endl;
	std::cout<<min(1, 1)<<std::endl;
	std::cout<<min('g', 'd')<<std::endl;
	std::cout<<min("dfs", "fdf")<<std::endl;
	
	std::cout<<"-----------------------max-----------------------"<<std::endl;
	std::cout<<max(12.3f, 13.3f)<<std::endl;
	std::cout<<max(233, 0)<<std::endl;
	std::cout<<max(-128888881223, 85445559247)<<std::endl;
	std::cout<<max(1, 1)<<std::endl;
	std::cout<<max('g', 'd')<<std::endl;
	std::cout<<max("dfs", "fdf")<<std::endl;
}