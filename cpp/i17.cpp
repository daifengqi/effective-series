#include <memory>
#include <iostream>

// Item 17: Store newed objects in smart pointers in standalone statements.

class MyClassi17 {
public:
    MyClassi17() {
        std::cout << "MyClass created" << std::endl;
    }

    ~MyClassi17() {
        std::cout << "MyClass destroyed" << std::endl;
    }
};

int i17() {
    // Create a smart pointer to a new instance of MyClass in a separate statement
    // p{} to initialize object is called "uniform initialization syntax" and it prevents narrowing conversions
    std::shared_ptr<MyClassi17> p{new MyClassi17()};

    // Use the object pointed to by the smart pointer
    std::cout << "Using MyClass object" << std::endl;

    return 0;
}