// Item 23: Prefer non-member non-friend functions to
// member functions.

// Item 24: ✦ If you need type conversions on all parameters to a function
// (includ- ing the one that would otherwise be pointed to by the this pointer),
// the function must be a non-member.

class MyClass {
public:
    void myMemberFunction(int x) {
        // ...
    }
};

int i23() {
    MyClass obj;
    obj.myMemberFunction(42); // this is equivalent to MyClass::myMemberFunction(&obj, 42);
    return 0;
}