class Widget {
public:
    Widget &operator=(const Widget &rhs) {
        // return a reference to its left-hand argument.
        return *this;
    }
};

class Counter {
public:
    Counter& increment() {
        count++;
        return *this;
    }

private:
    int count = 0;
};

