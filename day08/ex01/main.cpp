#include"span.hpp"
int main()
{
	Span sp = Span(1000);
	sp.addNumber(14);
	std::list<int> list3(2, 1);
	sp.addList(list3);
	std::list<int> list4(1, 90);
	sp.addList(list4);
	list3=sp.getList();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}