#include <algorithm>

// An rvalue reference is a reference that binds to a temporary object (rvalue). It is denoted by double ampersand (&&).
// It is used to implement move semantics in C++.

void rvalue() {
    // lvalue - objects with names
    int x = 10;

    // rvalue - temporary objects
    int &&y = 20; // y is rvalue reference to temporary int object with value 20

//    int &&z = x; // Error! cannot bind rvalue reference to lvalue

    int xx = 10;
    int &&yy = std::move(xx); // Okay, now x is rvalue after std::move
}


class StringRvalue {
    char *data;
    size_t size;

public:
    StringRvalue() {
        this->data = new char('1');
        this->size = 1;
    }

    // Copy constructor
    StringRvalue(const StringRvalue &other) {
        this->data = new char[other.size];
        memcpy(this->data, other.data, other.size);
        this->size = other.size;
    }

    // Move constructor
    StringRvalue(StringRvalue &&other)  noexcept {
        this->data = other.data;
        this->size = other.size;
        other.data = nullptr; // Release resources of rvalue reference
    }

    // Move assignment
    StringRvalue &operator=(StringRvalue &&other)  noexcept {
        if (this != &other) {
            delete[] this->data;
            this->data = other.data;
            this->size = other.size;
            other.data = nullptr;
        }
        return *this;
    }
};

void rvalueStringTest() {
    auto s = new StringRvalue();
    StringRvalue* news = s;
}