#include <memory>
#include <iostream>

// Item 17: Store newed objects in smart pointers in standalone statements.

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass created" << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass destroyed" << std::endl;
    }
};

int main() {
    // Create a smart pointer to a new instance of MyClass in a separate statement
    // p{} to initialize object is called "uniform initialization syntax" and it prevents narrowing conversions
    std::shared_ptr<MyClass> p{new MyClass()};

    // Use the object pointed to by the smart pointer
    std::cout << "Using MyClass object" << std::endl;

    return 0;
}