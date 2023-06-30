#include <iostream>

// User const reference or pointer to save memory if the data would not be modified

void use_reference_case() {
    int x = 10;
    int &ref = x;  // ref is a reference to x

    ref = 20;  // x is now 20
}

void use_pointer_case() {
    int x = 10;
    const int *ptr = &x;  // ptr is a pointer to x
    ptr = nullptr; // ptr is now null, does not affect x

    int xx = 10;
    int *const ptrr = &xx;
    *ptrr = 20; // xx is now 20
}

void increment(int &num) { // Pass by reference
    num++;
}

void increment(int *num) { // Pass by pointer
    *num++;
}

int i5extend() {
    int x = 10;
    increment(x);  // Passes reference, x is now 11
    increment(&x); // Passes pointer, x is now 12
}



