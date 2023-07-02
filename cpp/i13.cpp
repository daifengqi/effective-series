#include <memory>

// Item 13: Use objects to manage resources.

//✦ To prevent resource leaks, use RAII objects that acquire resources in their constructors
//  and release them in their destructors.

// Simple RAII ( "Resource Acquisition Is Initialization" )
class IntWrapper {
public:
    explicit IntWrapper(int *ptr) : ptr_(ptr) {}

    ~IntWrapper() { delete ptr_; }

    int &operator*() const { return *ptr_; }

private:
    int *ptr_;
};

//✦ Two commonly useful RAII classes are shared_ptr and unique_ptr. shared_ptr
// is usually the better choice,
// because its behavior when copied is intuitive. You cannot copy unique_ptr
class Investment {
};

Investment *createInvestment() {
    return new Investment();
}

void fi13() {
    // use unique_ptr
    std::unique_ptr<Investment> uInv(createInvestment());
    // move
    std::unique_ptr<Investment> uInv2(std::move(uInv));

    // copy will give error because you cannot copy a unique ptr
    // std::unique_ptr<Investment> uInv22(uInv);

    // or shared_ptr
    std::shared_ptr<Investment> sInv(createInvestment());
    // assign
    const std::shared_ptr<Investment> &uInv3(sInv);
}


// explicit keyword example
class Foo {
public:
    explicit Foo(int x) : x_(x) {}

    [[nodiscard]] int getX() const { return x_; }

private:
    int x_;
};

void bari13(Foo foo) {
    int x = foo.getX();
}

int i13extend() {
//    Foo foo1 = 42;  // Error: implicit conversion not allowed
    Foo foo2(42);   // OK: explicit constructor call
//    bar(42);        // Error: implicit conversion not allowed
    bari13(Foo(42));   // OK: explicit constructor call
    return 0;
}
//In general, you should use unique_ptr when you have exclusive ownership of an object,
// and shared_ptr when you need to share ownership. If you're not sure which one to use,
// it's always better to start with unique_ptr and switch to shared_ptr if you find that
// you need to share the object with other parts of your code.

//It's worth noting that there is also a third smart pointer called weak_ptr.
// weak_ptr is used in conjunction with shared_ptr to provide a non-owning reference to
// the object. It allows you to check if the object still exists, but it does not contribute
// to the ownership count of the object.
