#include <iostream>

// pass-by-reference
void increment(int& x) {
    x++;
}

int i20extend() {
    int a = 5;
    increment(a);
    std::cout << a << std::endl; // prints 6
    return 0;
}

// pass-by-pointer
void increment(int* x) {
    (*x)++;
}

int i20extend1() {
    int a = 5;
    increment(&a);
    std::cout << a << std::endl; // prints 6
    return 0;
}

// difference: pass by pointer can be nullptr! reference cannot be null