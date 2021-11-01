#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>
class Array
{
	private:
		T* array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int len);
		Array(Array& copy);
		Array& operator=(Array& copy);
		~Array();
		int size();
		T &	operator [] (unsigned int number);
};

template<typename T>
Array<T>::~Array()
{
	delete [] array;

}
template<typename T>
Array<T>::Array( void ) :array(nullptr),_size(0) 
{

}

template < typename T >
Array<T>::Array(unsigned int len) :array(new T[len])
{
	_size = len;
	for (unsigned int i = 0; i < len; ++i)
		array[i] = 0;
}

template < typename T >
Array<T>::Array(Array<T>& copy):array(new T[copy.size()])
{
	_size=copy.size();
	for (unsigned int i = 0; i < _size; ++i)
		array[i] = copy[i];
}

template < typename T >
Array<T>& Array<T>::operator=(Array<T>& copy)
{
	if(this==copy)
		return *this;
	if(_size!=copy.size())
	{
		delete [] array;
		_size=copy.size();
		array = new T[_size];
	}
	for (int i=0;i<_size;i++)
		array[i]=copy[i];
	return *this;
}

template < typename T >
int Array<T>::size()
{
	return(_size);
}

template < typename T >
T &	Array<T>::operator [] (unsigned int number)
{
	if (number>=_size)
		throw std::exception();
	else
		return array[number];
}
#endif