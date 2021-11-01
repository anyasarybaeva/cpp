#include"span.hpp"

Span::Span(unsigned int _N):N(_N)
{

}

Span::Span():N(0)
{

}

void Span::addNumber(int _number)
{
	if (this->list.size()==this->N)
		throw std::exception();
	list.push_back(_number);
}
// добавляет в конец несколько элкментов
//ошибка когда 2 списка подряд перекрывают друг дргуа
void Span::addList(std::list<int> _list)
{
	if((list.size()+_list.size())>N || _list.empty())
		throw std::exception();
	list.insert(--list.end(),_list.begin(),_list.end());
}

Span::Span(Span const &copy)
{
	*this=copy;
}

Span::~Span()
{

}

Span& Span::operator=(Span const& copy)
{
	N=copy.getN();
	list.assign(copy.getList().begin(),copy.getList().end());
	return *this;
}

unsigned int Span::getN() const
{
	return(N);
}

std::list<int> Span::getList() const
{
	return(list);
}

int Span::longestSpan()
{
	if (list.size()<2)
		throw std::exception();
	int dif;
	std::list<int>::iterator old;
	int index;
	std::list<int>::iterator elem;

	index = 1;
	old = list.begin();
	dif =0;
	for (std::list<int>::iterator iter = ++list.begin(); iter != list.end(); iter++)
    {
       if(std::abs(*iter -*old)>dif)
			dif=*iter -*old;
		old=iter;
    }
	return(dif);
}

int Span::shortestSpan()
{
	if (list.size()<2)
		throw std::exception();
	int dif;
	std::list<int>::iterator old;
	int index;

	index = 1;
	old = list.begin();
	dif =*(std::max_element(list.begin(),list.end()));
	for (std::list<int>::iterator iter = ++list.begin(); iter != list.end(); iter++)
    {
    	if(std::abs(*iter -*old)<dif)
			dif=std::abs(*iter -*old);
		old=iter;
    }
	return(dif);
}