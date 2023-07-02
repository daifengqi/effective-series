// Item 18: Make interfaces easy to use correctly and hard to use incorrectly.
// C++ is awash in interfaces. Function interfaces. Class interfaces. Template interfaces.

// Item 19: Treat class design as type design.

#include <vector>
#include "iostream"

// Item 20: Prefer pass-by-reference-to-const to pass-by- value.
// Prefer pass-by-reference-to-const over pass-by-value.
// It’s typically more efficient and it avoids the slicing problem."
void print_vector(const std::vector<int> &v) {
    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int i20() {
    std::vector<int> v{1, 2, 3, 4, 5};
    print_vector(v);
    return 0;
}

// The rule doesn’t apply to built-in types and STL iterator and func- tion object types.
// For them, pass-by-value is usually appropriate.
class Foo {
};

void doSomething(const Foo &foo) {}

//void doSomething(Foo foo) {  }
struct Base {
};
struct Derived : public Base {
};
//void doSomething(Base b) { /* ... */ }

void f() {
    Foo f;
    doSomething(f); // Slicing - d is sliced down to a Base
}

// i