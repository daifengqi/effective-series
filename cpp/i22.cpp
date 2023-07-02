// Item 22. Declare data members private.
// It gives clients syntactically uniform access to data, affords fine-grained access control,
// allows invariants to be enforced, and offers class authors implementation flexibility.

// protected is no more encapsulated than public.

#include <iostream>

class MyClass {
public:
    int publicVar; // can be accessed by anyone
    static void publicMethod() { // can be called by anyone
        std::cout << "This is a public method." << std::endl;
    }

protected:
    int protectedVar; // can be accessed by the class and its subclasses
    static void protectedMethod() { // can be called by the class and its subclasses
        std::cout << "This is a protected method." << std::endl;
    }

private:
    int privateVar; // can only be accessed by the class itself
    static void privateMethod() { // can only be called by the class itself
        std::cout << "This is a private method." << std::endl;
    }
};

class MySubclass : public MyClass {
public:
    void doSomething() {
        publicVar = 1; // can access public member of base class
        publicMethod(); // can call public method of base class

        protectedVar = 2; // can access protected member of base class
        protectedMethod(); // can call protected method of base class

        // privateVar and privateMethod are not accessible here
    }
};

int i22() {
    MyClass obj{};
    obj.publicVar = 1; // can access public member of MyClass
    MyClass::publicMethod(); // can call public method of MyClass

    // obj.protectedVar and obj.protectedMethod() are not accessible here
    // obj.privateVar and obj.privateMethod() are not accessible here

    MySubclass sub;
    sub.doSomething(); // can access protected members and methods of MyClass through inheritance

    return 0;
}