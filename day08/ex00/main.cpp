#include"easyfind.hpp"
template<typename T>
int easyfind(T &array,int value)
{
	if(std::find(array.begin(),array.end(),value)==array.end())
		throw std::exception();
	return(*(std::find(array.begin(),array.end(),value)));
}

int main()
{
	std::cout<<"------------------------------array-------------------------------"<<std::endl;
	std::array<int, 4> myarray = { 8, 6, 4, 1 };
	try
	{
		int i=easyfind(myarray,1);
		std::cout<<i<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "no value in array" << '\n';
	}
	std::cout<<"------------------------------vector-------------------------------"<<std::endl;
	std::vector<int> vect;
	for (int count=0; count < 5; ++count)
    	vect.push_back(10 - count); 
	try
	{
		int i=easyfind(vect,8);
		std::cout<<i<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "no value in vector" << '\n';
	}
	std::cout<<"------------------------------deque-------------------------------"<<std::endl;
	std::deque<int> deq;
	for (int count=0; count < 4; ++count)
	{
    	deq.push_back(count); 
    	deq.push_front(10 - count);
	}
	try
	{
		int i=easyfind(deq,-1);
		std::cout<<i<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "no value in deque" << '\n';
	}
	return 0;
}
