#include "sum.hpp"
#include <iostream>

int main(){

    int a=5, b=10;
    std::cout << "Sum =" << Sum(a,b) << std::endl; // T is deduced to int

    std::cout << "Sum =" << Sum(static_cast<float>(3), 4.5f) << std::endl; // T is deduced to float

    std::cout << "Sum =" << Sum<double>(3.5f, 4.5f) << std::endl; // T is explicitly set to double

    int (*funcPtr)(int, int) = Sum; // T is deduced to int for function pointer
    std::cout << "Sum via function pointer =" << funcPtr(7, 8) << std::endl;
    return 0;


}