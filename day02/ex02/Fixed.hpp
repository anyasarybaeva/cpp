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
	Fixed& operator =(const Fixed&);
	//arithmetic operators
	Fixed operator +(const Fixed& );
	Fixed operator -(const Fixed& );
	Fixed operator *(const Fixed& );
	Fixed operator /(const Fixed& );
	//comparison operators
	bool operator <(const Fixed&);
	bool operator >(const Fixed&);
	bool operator <=(const Fixed&);
	bool operator >=(const Fixed&);
	bool operator ==(const Fixed&);
	bool operator !=(const Fixed&);
	//pre-increment, post-increment, pre-decrement and post-decrement operators,
	Fixed& operator ++();
	Fixed operator ++(int);
	Fixed& operator --();
	Fixed operator --(int);
	//min max
	static const Fixed& min(const Fixed&,const Fixed&);
	static Fixed& min( Fixed&, Fixed&);
	static const Fixed& max(const Fixed&,const Fixed&);
	static Fixed& max( Fixed&, Fixed&);
	int getRawBits( void ) const;
	void setRawBits( int const);
};
std::ostream& operator<<(std::ostream& out, const Fixed& origin);
#endif