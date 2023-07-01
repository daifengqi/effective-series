#include <iostream>
#include "memory"

// Item 15: Provide access to raw resources in resource- managing classes.

class Test {
public:
    Test() : num(new int) {};

    void print() const {
        std::cout << this->num << std::endl;
    }

private:
    int *num;
};

void f() {
    Test *ptr = new Test;
    std::unique_ptr<Test> uptr(ptr);
    Test *t1 = uptr.get();
    t1->print();


    std::shared_ptr<Test> sptr(ptr);
    Test *t2 = sptr.get();
    t2->print();
}


