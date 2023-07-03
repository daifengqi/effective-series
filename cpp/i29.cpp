// Item 29: Strive for exception-safe code.


#include <algorithm>

class MyClassi29 {
public:
    MyClassi29(int value) : mData(new int(value)) {}

    MyClassi29(const MyClassi29 &other) : mData(new int(*other.mData)) {}

    ~MyClassi29() { delete mData; }

    // copy and swap
    MyClassi29 &operator=(MyClassi29 other) {
        swap(*this, other);
        return *this;
    }

    friend void swap(MyClassi29 &first, MyClassi29 &second) {
        using std::swap;
        swap(first.mData, second.mData);
    }

private:
    int *mData;
};

void myFunction() {
    MyClassi29 obj1(42);
    // ...
    // do some work with obj1
    // ...
    MyClassi29 obj2(obj1); // make a copy of obj1
    // ...
    // do some more work with obj2
    // ...
    obj1 = obj2; // swap obj1 with obj2 (no exception can occur here)
    // obj1 now has the modified state of obj2, and obj2 has the original state of obj1
}