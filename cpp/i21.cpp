// Item 21. Never return a pointer or reference to a local stack object,
// a reference to a heap-allocated object,
// or a pointer or reference to a local static object
// if there is a chance that more than one such object will be needed.

// 1. Never return a pointer or reference to a local stack object:
//  Local stack objects are destroyed when the function returns.
//  So if you return a pointer or reference to a local stack object,
//  that pointer/reference will be dangling after the function returns.

int *foo() {
    int x = 10; // local stack object
    return &x; // dangling pointer! x is destroyed when foo() returns
}


// 2. Never return a reference to a heap-allocated object:
// Heap-allocated objects are destroyed when they go out of scope.
// If you return a reference to a heap-allocated object,
// that reference can outlive the actual object and become dangling.


int &bar() {
    int *x = new int(10); // heap allocated
    return *x; // dangling reference! x is destroyed when bar() returns
}

int *baz() {
    static int x = 10;
    return &x; // potentially dangling if baz() is called multiple times!
}
