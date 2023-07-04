#include <iostream>
#include <typeinfo>

int main() {
    int x = 1;
    double y = 42;
    const std::type_info &tx = typeid(x);
    const std::type_info &ty = typeid(y);

    std::cout << tx.name() << std::endl;
    std::cout << ty.name() << std::endl;

    int i = 10;
    int &ref = i; // declare a reference variable 'ref' for 'x'
    return 0;
}
