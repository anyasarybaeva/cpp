#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include<list>
#include<iostream>
#include <algorithm>
#include<exception>
#include<vector>
#include<deque>
#include<stack>
template<typename T>
class MutantStack:public std::stack<T>
{
	private:

	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T>& copy) 
		{ 
			*this = copy; 
		}
		virtual ~MutantStack() {}
		MutantStack<T>& operator=(const MutantStack<T>& copy)
		{
			this->c = copy.c;
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() 
		{
			return this->c.begin();
		}
		iterator begin() const 
		{
			return this->c.begin;
		}
		iterator end() 
		{
			return this->c.end(); 
		}
    	iterator end() const 
		{
			return this->c.end; 
		}
};
#endif