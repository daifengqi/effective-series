#include <iostream>

class A {
public:
    virtual void foo() {}
};

class B : public A {
public:
    void bar() {
        std::cout << 'B' << std::endl;
    }

    static void barr() {
        std::cout << "BB" << std::endl;
    }
};


int maini3extend() {
    A *ptrA = new B;
    // dynamic_cast return nullptr if cannot convert
    B *ptrB = dynamic_cast<B *>(ptrA); // downcast from A* to B*
    if (ptrB != nullptr) {
        ptrB->bar(); // okay, ptrB points to a B object
        B::barr();
    }

    const int x = 10;
    const int *ptr = &x; // pointer to const int
    int *ptr2 = const_cast<int *>(ptr); // cast away constness
    *ptr2 = 20; // okay, modifies x
    std::cout << *ptr2 << std::endl;

    int xx = 10;
    auto y = static_cast<double>(xx); // convert int to double

    std::cout << y << std::endl;
}



