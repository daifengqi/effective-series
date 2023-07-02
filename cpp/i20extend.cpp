#include <iostream>

// pass-by-reference
void increment0(int& x) {
    x++;
}

int i20extend() {
    int a = 5;
    increment0(a);
    std::cout << a << std::endl; // prints 6
    return 0;
}

// pass-by-pointer
void increment1(int* x) {
    (*x)++;
}

int i20extend1() {
    int a = 5;
    increment1(&a);
    std::cout << a << std::endl; // prints 6
    return 0;
}

// difference: pass by pointer can be nullptr! reference cannot be null