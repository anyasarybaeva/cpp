#include"span.hpp"
int main()
{
	Span sp = Span(1000);
	sp.addNumber(12345678);
	std::list<int> list3(500, 2);
	sp.addList(list3);
	std::list<int> list4(1, 90);
	sp.addList(list4);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}