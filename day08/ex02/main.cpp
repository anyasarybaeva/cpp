#include"mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout<<"create mstack"<<std::endl;
	std::cout<<"-------------------"<<std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout<<"size:" << mstack.size() << std::endl;
	std::cout <<"top:"<< mstack.top() << std::endl;
	mstack.pop();
	std::cout<<"pop"<<std::endl;
	std::cout<<"size:" << mstack.size() << std::endl;
	std::cout <<"top:"<< mstack.top() << std::endl;
	std::cout<<"-------------------"<<std::endl;
	std::cout<<"add elements to mstack"<<std::endl;
	mstack.push(-12);
	mstack.push(33);
	mstack.push(737);
	mstack.push(0);
	mstack.push(-12);
	mstack.push(333);
	mstack.push(7);
	mstack.push(-89);
	std::cout<<"-------------------"<<std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout<<"all elements of mstack"<<std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}