#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include<cmath>
class Fixed
{
private:
	int value;
	static const int n_of_bits=8;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed&);
	~Fixed();
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator =(const Fixed& copy);
	int getRawBits( void ) const;
	void setRawBits( int const);
};
std::ostream& operator<<(std::ostream& out, const Fixed& origin);
#endif