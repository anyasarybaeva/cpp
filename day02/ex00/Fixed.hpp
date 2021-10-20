#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
private:
	int value;
	static const int n_of_bits=8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed&);
	Fixed& operator =(Fixed& copy);
	int getRawBits( void ) const;
	void setRawBits( int const);
};
#endif