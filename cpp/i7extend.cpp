#include <memory>

class Dog {
};


int main() {

    Dog *d = new Dog();  // Constructor called
    delete d;            // Destructor called

    std::unique_ptr<Dog> p(new Dog());  // Constructor called

    p.reset(new Dog());  // Old Dog destroyed here, new Dog constructed

    Dog dd;  // Constructor called
    // Destructor called here at end of program
}

// So in summary, destructors are called when:
//
// The object goes out of scope
// You explicitly delete the object
// The program exits
// You call reset() on a unique_ptr holding the object