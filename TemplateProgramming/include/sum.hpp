#ifndef SUM_HPP
#define SUM_HPP
#include <typeinfo>
#include <iostream>
template<typename T>
T Sum(T a, T b) {
    std::cout << "Template function called with type: " << typeid(T).name() << std::endl;
    return a + b;
}

template char Sum(char a, char b); // Explicit instantiation for char type

template<typename T, int size> // Function template to sum elements of a fixed-size array
T SumArray(T (&array)[size]) {
    T sum = 0;
    for(int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}       
#endif