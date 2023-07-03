//Item 32: Make sure public inheritance models “is-a.”
//Item 33: Avoid hiding inherited names.
//Item 34: Differentiate between inheritance of interface and inheritance of implementation.
//Item 35: Consider alternatives to virtual functions.
//Item 36: Never redefine an inherited non-virtual function.
//Item 37: Never redefine a function’s inherited default parameter value.
//Item 38: Model “has-a” or “is-implemented-in-terms- of” through composition.
//Item 39: Use private inheritance judiciously.
//Item 40: Use multiple inheritance judiciously.

// Item 35: Consider alternatives to virtual functions.
#include <iostream>

// Define a function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

int functionPointerExample() {
    // Declare a function pointer that takes two integers and returns an integer
    int (*pAdd)(int, int);

    // Assign the address of the add function to the function pointer
    pAdd = &add;

    // Call the add function indirectly through the function pointer
    int result = (*pAdd)(2, 3);

    std::cout << "The result is: " << result << std::endl;

    return 0;
}

// function pointer callback

// Define a function that takes a function pointer as an argument
void performOperation(int a, int b, int (*operation)(int, int)) {
    int result = operation(a, b);
    std::cout << "The result is: " << result << std::endl;
}


int subtract(int a, int b) {
    return a - b;
}

int i35() {
    // Call the performOperation function with different operations
    performOperation(2, 3, &add);
    performOperation(5, 2, &subtract);

    return 0;
}

#include <functional>


int std_function() {
    std::function<int(int, int)> func = add;
    std::cout << func(2, 3) << std::endl; // prints 5
    return 0;
}

int std_function_lambda() {
    std::function<int(int, int)> func = [](int a, int b) { return a + b; };
    std::cout << func(2, 3) << std::endl; // prints 5
    return 0;
}


class MyClassAdd {
public:
    explicit MyClassAdd(int num) : c(num) {};

    [[nodiscard]] int add(int a, int b) const {
        return a + b + c;
    }

private:
    int c;
};

int std_function_class_method() {
    MyClassAdd obj{1};
    std::function<int(MyClassAdd *, int, int)> func = &MyClassAdd::add;
    std::cout << func(&obj, 2, 3) << std::endl; // prints 6
    return 0;
}

#include <functional>
#include <iostream>

struct Fooi35 {
    Fooi35(int num) : num_(num) {}

    void print_add(int i) const { std::cout << num_ + i << '\n'; }

    int num_;
};

void print_num(int i) {
    std::cout << i << '\n';
}

struct PrintNum {
    void operator()(int i) const {
        std::cout << i << '\n';
    }
};

int i35cppreference() {
    // store a free function
    std::function<void(int)> f_display = print_num;
    f_display(-9);

    // store a lambda
    std::function<void()> f_display_42 = []() { print_num(42); };
    f_display_42();

    // store the result of a call to std::bind
    std::function<void()> f_display_31337 = std::bind(print_num, 31337);
    f_display_31337();

    // store a call to a member function
    std::function<void(const Fooi35 &, int)> f_add_display = &Fooi35::print_add;
    const Fooi35 foo(314159);
    f_add_display(foo, 1);
    f_add_display(314159, 1);

    // store a call to a data member accessor
    std::function<int(Fooi35 const &)> f_num = &Fooi35::num_;
    std::cout << "num_: " << f_num(foo) << '\n';

    // store a call to a member function and object
    using std::placeholders::_1;
    std::function<void(int)> f_add_display2 = std::bind(&Fooi35::print_add, foo, _1);
    f_add_display2(2);

    // store a call to a member function and object ptr
    std::function<void(int)> f_add_display3 = std::bind(&Fooi35::print_add, &foo, _1);
    f_add_display3(3);

    // store a call to a function object
    std::function<void(int)> f_display_obj = PrintNum();
    f_display_obj(18);

    auto factorial = [](int n) {
        // store a lambda object to emulate "recursive lambda"; aware of extra overhead
        std::function<int(int)> fac = [&](int n) { return (n < 2) ? 1 : n * fac(n - 1); };
        // note that "auto fac = [&](int n) {...};" does not work in recursive calls
        return fac(n);
    };
    for (int i{5}; i != 8; ++i)
        std::cout << i << "! = " << factorial(i) << ";  ";
    std::cout << '\n';
}