// Item 16: Use the same form in corresponding uses of new and delete.
#include <string>

auto lambda = []() -> std::string* {
    auto* ptr = new std::string("Hello, world!");
    return ptr;
};

void f() {
    std::string* str = lambda();
}

// [capture-list] (parameter-list) -> return-type {
//     function-body
// }

auto sum = [](int a, int b) -> int {
    return a + b;
};

int result = sum(3, 4); // result is 7

#include <iostream>

int i16() {
    int x = 10;
    int y = 20;

    auto func = [x, &y]() {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
        y = 30; // changing the captured variable by reference
    };

    func(); // prints "x = 10" and "y = 20"

    std::cout << "After lambda call:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl; // prints "y = 30"

    return 0;
}