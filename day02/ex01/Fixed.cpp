#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->value=0;
}
Fixed::Fixed(const Fixed& copy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this=copy;
}
Fixed::Fixed(const int _value)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->value=_value*(1<<n_of_bits);
}
Fixed::Fixed(const float _value)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->value=roundf(_value*(1<<n_of_bits));
}
Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
Fixed& Fixed::operator =(const Fixed& copy)
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
float Fixed::toFloat( void ) const
{
	return (float)value/(float)(1<<n_of_bits);
}
int Fixed::toInt( void ) const
{
	return value/(1<<n_of_bits);

}

std::ostream& operator<<(std::ostream& out, const Fixed& copy)
{
	out<<copy.toFloat();
	return out;
}
