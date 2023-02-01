#include "function.hpp"

#include <iostream>
#include <cstdlib>

void Function_1()
{
    std::cout << "Function_1\n";
}

int Function_2()
{
    std::cout << "Function_2\n";
    return 3;
}

int Function_3(int value)
{
    std::cout << "Function_3\n";
    std::cout << "Value:" << value << '\n';
    return (3+value);

}

int main()
{
    return EXIT_SUCCESS;
}