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
#endif