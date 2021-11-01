#ifndef TYPES_HPP
#define TYPES_HPP
#include<iostream>
#include<ctype.h>
#include <iomanip>
#include <limits>
bool is_char(std::string const str);
bool is_int(std::string const str);
bool is_float(std::string const str);
bool is_double(std::string const str);
void print_char(int number);
void print_char(double number);
void print_char(float number);
#endif