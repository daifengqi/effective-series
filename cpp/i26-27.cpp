// Item 26: Postpone variable definitions as long as possible.

// Item 27: Minimize casting.

// static_cast vs dynamic cast ?



class Base {
public:
    virtual  ~Base() {};
};

class Derived : public Base {
};

void modify(int* ptr) {
    *ptr = 20;
}

// const_cast: modify const
int i27() {
    const int num = 10;
    const int* ptr = &num;

    modify(const_cast<int*>(ptr));

    return 0;
}

void fi26() {
    int x = 5;
    auto y = static_cast<double>(x); // y is now 5.0

    Base *b = new Derived();
    auto *d = dynamic_cast<Derived *>(b);
    Base *b2 = new Base();
    auto *d2 = dynamic_cast<Derived *>(b2);

    const int num = 10;
    int* ptr = const_cast<int*>(&num);
    *ptr = 20;
}
