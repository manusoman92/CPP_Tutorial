#include "sum.hpp"
#include <iostream>

template<> int * Sum<int *>(int* a, int* b) { // Explicit specialization for int*
    std::cout << "Specialized template function for int* called." << std::endl;
    int *sum {new int(*a + *b)};
    return sum;
}

int main(){

    int a=5, b=10;
    std::cout << "Sum =" << Sum(a,b) << std::endl; // T is deduced to int

    std::cout << "Sum =" << Sum(static_cast<float>(3), 4.5f) << std::endl; // T is deduced to float

    std::cout << "Sum =" << Sum<double>(3.5f, 4.5f) << std::endl; // T is explicitly set to double

    int (*funcPtr)(int, int) = Sum; // T is deduced to int for function pointer
    std::cout << "Sum via function pointer =" << funcPtr(7, 8) << std::endl;

    int *p {new int(20)};
    int *q {new int(30)};
    int *res = Sum<int*>(p, q); // T is explicitly set to int*
    std::cout << "Sum of pointers via explicit instantiation =" << *res << std::endl;
    delete res;
    delete p;
    delete q;
    return 0;


}