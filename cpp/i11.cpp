// Item 11: Handle assignment to self in operator=.

// a[i] = a[j]; // potential assignment to self
// *px = *py; // potential assignment to self

// Solutions

class Pb {
};

class Widget {
public:
    // comparing addresses of source
    Widget &operator=(const Widget &rhs) {
        if (this == &rhs) return *this;
        delete pb;
        return *this;
    }

    // careful statement ordering
    Widget &assign(const Widget &rhs) {
        if (this == &rhs) return *this;
        delete pb;
        return *this;
    }

    void swap(Widget &rhs) {};
    // copy-and-swap
    Widget assign2(const Widget &rhs) {
        Widget temp(rhs); // make a copy of rhs’s data
        swap(temp); // swap *this’s data with the copy’s } return
    }

private:
    Pb *pb;
};







