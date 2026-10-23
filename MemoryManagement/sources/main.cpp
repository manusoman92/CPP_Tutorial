#include <iostream>

//Example for Dynamic pointer allocation and deallocation

int main() {
    int* ptr = new int; // dynamically allocate an integer
    *ptr = 42;          // assign a value to the allocated memory
    std::cout << "Value: " << *ptr << std::endl; // output the value
    delete ptr;        // deallocate the memory
    ptr = nullptr;    // avoid dangling pointer
    ptr = new int(5);
    std::cout << "Value: " << *ptr << std::endl; // output the value
    delete ptr;        // deallocate the memory
    ptr = nullptr;    // avoid dangling pointer
    return 0;
}