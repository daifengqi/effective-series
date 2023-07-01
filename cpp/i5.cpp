#include <iostream>

// Ietem 5. Know what functions C++ silently writes and calls

// Compilers may implicitly generate a class’s default constructor, copy constructor,
// copy assignment operator, and destructor.

class Empty {
};

class EmptyReal {
public:
    EmptyReal() = default;

    EmptyReal(const EmptyReal &rhs) = default;

    ~EmptyReal() = default;

    EmptyReal &operator=(const EmptyReal &rhs) {}
};

template<typename T>
class NamedObject {
public:
    NamedObject(const char *name, const T &value);

    NamedObject(const std::string &name, const T &value);

private:
    std::string nameValue;
    T objectValue;
};

template<typename T>
NamedObject<T>::NamedObject(const char *name, const T &value) {

}

template<typename T>
NamedObject<T>::NamedObject(const std::string &name, const T &value) {

}

int i5() {
    NamedObject<int> no1("Smallest Prime Number", 2);
    NamedObject<int> no2(no1);
}



