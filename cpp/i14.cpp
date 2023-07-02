// Item 14: Think carefully about copying behavior in resource-managing classes.


#include <vector>

// 1. disallow copying
class Resource1 {
public:
    Resource1() { /* acquire resource */ };

    ~Resource1() { /* release resource */ }

    // disallow copying
    Resource1(const Resource1 &) = delete;

    Resource1 &operator=(const Resource1 &) = delete;
};

void foo1i14() {
    Resource1 r1;  // OK
//     Resource r2(r1);  // error: copy constructor is deleted
    // r1 = r2;  // error: copy assignment operator is deleted
}

// 2. reference counting (use shard_ptr)

// 3. deep copy
class Resource {
public:
    Resource() { /* acquire resource */ }

    ~Resource() { /* release resource */ }

    // copy constructor
    Resource(const Resource &other) : data(other.data) { /* create deep copy */ }

    // copy assignment operator ?
    Resource &operator=(const Resource &other) {
        if (this != &other) {
            data = other.data;  // create deep copy
        }
        return *this;
    }

private:
    std::vector<int> data;
};

void fooi14() {
    Resource r1;
    Resource r2(r1);  // OK, r2 now has a deep copy of r1's resource
    Resource r3 = r1;  // OK, r3 now has a deep copy of r1's resource
    r1 = r2;  // OK, r1 now has a deep copy of r2's resource
}