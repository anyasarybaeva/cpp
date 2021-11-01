#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template<typename T>
void iter(T* array, int len, void (*f)(T const &));

#endif