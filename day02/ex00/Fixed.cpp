#include"Fixed.hpp"
Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->value=0;
}
Fixed::Fixed(Fixed& copy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this=copy;
}
Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
Fixed& Fixed::operator =(Fixed& copy)
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->value=copy.getRawBits();
	return(*this);
}
void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->value=raw;
}
int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return(this->value);
}