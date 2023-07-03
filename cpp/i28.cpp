// Item 28: Avoid returning “handles” to object internals.

#include <string>

// return reference
class MyClassi28ref {
public:
    // C++ 17: the return value should not be discarded.
    [[nodiscard]] const std::string &getData() const { return data_; }

private:
    std::string data_;
};

// return pointer
class MyClassi28pointer {
public:
    [[nodiscard]] const int *getData() const { return &data_; }

private:
    int data_;
};

// You can modify them?
void fi28() {
    MyClassi28ref myObjectf;
    [[maybe_unused]] const std::string &myData = myObjectf.getData();

    MyClassi28pointer myObjectp{};
    const int *myDatap = myObjectp.getData();
}
