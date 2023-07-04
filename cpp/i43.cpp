// Item 43: Know how to access names in templatized base classes." give me code examples please.

typedef int myint;
typedef struct {
    int x;
    int y;
} point;

template<typename T>
class Base {
public:
    typedef T value_type;
    [[maybe_unused]] point* p;
};

template<typename T>
class Derived : public Base<T> {
public:
    void foo() {
        typename Base<T>::value_type val; // OK
    }
};