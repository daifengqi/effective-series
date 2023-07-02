#include "cstddef"

// Prepare: rvalue reference parameter
class MyArray {
public:
    explicit MyArray(size_t size) : data(new int[size]), size(size) {}

    ~MyArray() { delete[] data; }

    MyArray(MyArray &&other) noexcept: data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    // "rvalue reference parameter"
    // make this "move assignment operator"
    MyArray &operator=(MyArray &&other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }

private:
    int *data;
    size_t size;
};

// ✦ Provide a swap member function when std::swap would be inefficient for your type.
//  Make sure your swap doesn’t throw exceptions.
// ✦ If you offer a member swap, also offer a non-member swap that calls the member.
// For classes (not templates), specialize std::swap, too.
// ✦ When calling swap, employ a using declaration for std::swap,
// then call swap without namespace qualification.
// ✦ It’s fine to totally specialize std templates for user-defined types,
// but never try to add something completely new to std.