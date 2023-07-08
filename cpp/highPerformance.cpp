//Move semantics and Rvalue references

#include <vector>

// Move constructor
class MyStringHP {
public:
    // ...
    MyStringHP(MyStringHP &&other) noexcept // noexcept indicates that this operation will not throw exceptions
            : data_(other.data_) {
        other.data_ = nullptr; // Release ownership of the data from the other object
    }
    // ...
private:
    char *data_;
};

// Smart pointers
#include <memory>
#include <iostream>

void f_smart_pointer() {
    // Unique pointer example
    std::unique_ptr<int> uptr(new int(42));

    // Shared pointer example
    std::shared_ptr<int> sptr(new int(42), [](int *p) {
        delete p;
        std::cout << "Memory released." << std::endl;
    });
}



// constexpr

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

constexpr int result_of_factorial = factorial(5); // Computed at compile-time


// inlining
inline int addinlinef(int a, int b) {
    return a + b;
}

int main() {
    int result = addinlinef(3, 4); // Compiler may inline this call
    return 0;
}

// C++ supports parallel programming, which can help you leverage multiple CPU cores for better performance.
// The C++ Standard Library provides parallel algorithms and the <thread> header for creating threads.
#include <algorithm>

void parallel_example() {
    std::vector<int> data = {1, 2, 3, 4, 5};

    // Parallel version of std::for_each
    std::for_each(data.begin(), data.end(), [](int &n) {
        n *= 2;
    });
}



