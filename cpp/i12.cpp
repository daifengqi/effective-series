
// Copy all parts of an object

#include <string>

class Customer {
public:
    Customer() = default;

    // 1. copy constructor
    Customer(const Customer &rhs) = default;

    // 2. copy assignment operator
    Customer &operator=(const Customer &rhs) = default;

private:
    std::string name;
};

//✦ Copying functions should be sure to copy all of an object’s data members and all of its base class parts.

//✦ Don’t try to implement one of the copying functions in terms of the other.
//  Instead, put common functionality in a third function that both call.