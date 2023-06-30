#include <iostream>

class Counter {
public:
    Counter &increment() {
        count++;
        return *this;
    }

    Counter increment_not_self() {
        count++;
        return *this;
    }

    void print() const {
        std::cout << count << std::endl;
    }

private:
    int count = 0;
};


int i10extend() {
    Counter c;

    c.increment().increment().increment();

    c.print();

    Counter cc;

    cc.increment_not_self().increment_not_self().increment_not_self();

    cc.print();
}



