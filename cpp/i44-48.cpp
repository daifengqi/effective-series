// Item 44: Factor parameter-independent code out of templates."
//Item 45: Use member function templates to accept “all compatible types.”
//Item 46: Define non-member functions inside templates when type conversions are desired.

//Item 47: Use traits classes for information about types.
//Item 48: Be aware of template metaprogramming.

// Trait classes

#include <iostream>
#include <type_traits>

template<typename T>
struct is_integral {
    static const bool value = std::is_integral<T>::value;
};

template<typename T>
void print_is_integral() {
    std::cout << "Is integral: " << (is_integral<T>::value ? "true" : "false") << std::endl;
}

int print_is_integral() {
    print_is_integral<int>();        // true
    print_is_integral<float>();      // false
    print_is_integral<unsigned>();   // true
    print_is_integral<double>();     // false
}

// Template Metaprogramming (TMP)
// optimize code by moving costly operations from runtime to compile time.
#include <iostream>

template<unsigned int N>
struct Factorial {
    static const unsigned int value = N * Factorial<N - 1>::value;
//    enum {
//        value = N * Factorial<N - 1>::value
//    };
};

template<>
struct Factorial<0> {
    static const unsigned int value = 1;
};

int factorialOutput() {
    std::cout << "Factorial of 5 is: " << Factorial<5>::value << std::endl; // 120
}


// Variadic Templates
#include <iostream>

// Base case: no arguments
int sumi44() {
    return 0;
}

// Recursive case: sum the first argument and the sum of the rest
template<typename T, typename... Args>
int sumi44(T first, Args... args) {
    return first + sumi44(args...);
}

int maini44() {
    std::cout << "Sum: " << sumi44(1, 2, 3, 4, 5) << std::endl; // 15
}

// type introspection,

#include <iostream>
#include <typeinfo>

int maini44new() {
    int x = 1;
    double y = 42;
    const std::type_info &tx = typeid(x);
    const std::type_info &ty = typeid(y);

    std::cout << tx.name() << std::endl; // i
    std::cout << ty.name() << std::endl; // d

    int i = 10;
    int &ref = i; // declare a reference variable 'ref' for 'x'
    return 0;
}
