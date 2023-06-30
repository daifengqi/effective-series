//A left-hand object in C++ is an object whose name appears on the left-hand
// side of an assignment or initialization.

void foo() {
    // For example:
    int x = 5;  // x is a left-hand object
    x = 10;     // x is again a left-hand object
}

//The key thing about left-hand objects is that
// they must have non-const lvalues, meaning they must be modifiable.
// Some examples of things that cannot be left-hand objects:
//
//Constants: const int x = 5; x = 10;  // Error!
//Rvalues: int(5) = 10;  // Error!
//Temporary objects: int x = 5; (x) = 10; // Error!

//So in short, a left-hand object is an object that can appear
// on the left side of an assignment, which means it must be a modifiable lvalue.
//
//Some examples of valid left-hand objects:
//
//Variables: int x; x = 5;
//Non-const class members: struct S { int x; }; S s; s.x = 5;
//    Non-const dereferenced pointers: int* p; *p = 5;
//    Non-const array elements: int arr[5]; arr[0] = 5;
//    Hope this helps clarify left-hand objects in C++! Let me know if you have any other questions.

// lvalues V.S. rvalues

//In C++, there are two kinds of expressions:
//
//lvalues: Expressions that refer to a memory location. These can appear on the left or right side of an assignment.
//rvalues: Expressions that do not have a persistent memory location.
// These can only appear on the right side of an assignment.
//Some examples:
//
//lvalues:
//
//    Variables: int x;
//Non-const class members: struct S { int x; }; S s; s.x;
//    Non-const dereferenced pointers: int* p; *p;
//    Non-const array elements: int arr[5]; arr[0];
//    rvalues:
//
//    Literals: 5; 3.14; 'c'; "hello";
//    Temporary objects: int(5);
//    Function calls: func();
//    Arithmetic expressions: x + y;
//    Unnamed temporaries: 5 + func();
//    lvalues have two key properties:
//
//    They refer to a memory location.
//    They can appear on the either side of an assignment (left or right).
//    rvalues:
//
//    Do not have a persistent memory location.
//    Can only appear on the right side of an assignment.