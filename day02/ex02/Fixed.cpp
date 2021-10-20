#include"Fixed.hpp"

Fixed::Fixed()
{
	//std::cout<<"Default constructor called"<<std::endl;
	this->value=0;
}
Fixed::Fixed(const Fixed& copy)
{
	//std::cout<<"Copy constructor called"<<std::endl;
	*this=copy;
}
Fixed::Fixed(const int _value)
{
	//std::cout<<"Int constructor called"<<std::endl;
	this->value=_value*(1<<n_of_bits);
}
Fixed::Fixed(const float _value)
{
	//std::cout<<"Float constructor called"<<std::endl;
	this->value=roundf(_value*(1<<n_of_bits));
}
Fixed::~Fixed()
{
	//std::cout<<"Destructor called"<<std::endl;
}
Fixed& Fixed::operator =(const Fixed& a)
{
	//std::cout<<"Assignation operator called"<<std::endl;
	this->value=a.getRawBits();
	return(*this);
}
void Fixed::setRawBits( int const raw )
{
	//std::cout<<"setRawBits member function called"<<std::endl;
	this->value=raw;
}
int Fixed::getRawBits( void ) const
{
	//std::cout<<"getRawBits member function called"<<std::endl;
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
//min max
const Fixed& Fixed::min(const Fixed& a,const Fixed& b)
{
	if(a.getRawBits()>b.getRawBits())
		return(b);
	return(a);
}
Fixed& Fixed::min( Fixed& a, Fixed& b)
{
	if(a.getRawBits()>b.getRawBits())
		return(b);
	return(a);
}
const Fixed& Fixed::max(const Fixed& a,const Fixed& b)
{
	if(a.getRawBits()<b.getRawBits())
		return(b);
	return(a);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a.getRawBits()<b.getRawBits())
		return(b);
	return(a);
}
//comparison operators
bool Fixed::operator <(const Fixed& a)
{
	return this->getRawBits()<a.getRawBits();
}
bool Fixed::operator >(const Fixed& a)
{
	return this->getRawBits()>a.getRawBits();
}
bool Fixed::operator <=(const Fixed& a)
{
	return this->getRawBits()<=a.getRawBits();
}
bool Fixed::operator >=(const Fixed& a)
{
	return this->getRawBits()>=a.getRawBits();

}
bool Fixed::operator ==(const Fixed& a)
{
	return this->getRawBits()==a.getRawBits();
}
bool Fixed::operator !=(const Fixed& a)
{
	return this->getRawBits()!=a.getRawBits();

}
//arithmetic operators
Fixed Fixed::operator +(const Fixed& a)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits()+a.getRawBits());
	return(tmp);
}
Fixed Fixed::operator -(const Fixed& a)
{
	Fixed tmp;

	tmp.setRawBits(this->getRawBits()-a.getRawBits());
	return(tmp);
}
Fixed Fixed::operator *(const Fixed& a)
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits()*a.toFloat());
	return(tmp);	
}
Fixed Fixed::operator /(const Fixed& a)
{
	Fixed tmp;
	tmp.setRawBits(this->getRawBits()/a.toFloat());
	return(tmp);	
	return(a);
}
Fixed& Fixed::operator ++()
{
	this->value++;
	return(*this);
}
Fixed Fixed::operator ++(int)
{
	Fixed tmp(*this);
	tmp.setRawBits(this->value+1);
	return(tmp);

}
Fixed& Fixed::operator --()
{
	this->value--;
	return(*this);
}
Fixed Fixed::operator --(int)
{
	Fixed tmp(*this);
	tmp.setRawBits(this->value-1);
	return(tmp);
}