#ifndef SPAN_HPP
#define SPAN_HPP
#include<list>
#include<iostream>
#include <algorithm>
#include<exception>
class Span
{
	private:
		std::list<int> list;
		unsigned int N;
	public:
		Span();
		Span(unsigned int _N);
		Span(Span const &copy);
		~Span();
		Span& operator=(Span const &copy);
		void addNumber(int _number);
		void addList(std::list<int> _list);
		unsigned int getN() const;
		std::list<int> getList() const;
		int shortestSpan();
		int longestSpan();
};

#endif