#include <iostream>

// Item 7: Declare destructors virtual in polymorphic base classes.

class TimeKeeper {
public:
    TimeKeeper() = default;
    virtual ~TimeKeeper() = default;
};

int i7() {
    TimeKeeper k;
}



