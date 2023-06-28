#include <iostream>

void changeInt(int * const p) {
    *p = 10;
}

void foo(const char* p) {
    // can read data pointed to by p
    std::cout << p << std::endl;

    // cannot modify data pointed to by p
    // p[0] = 'A'; // generates a compiler error

    // can modify the pointer itself
    p = "new string";
    std::cout << p << std::endl;
}

void bar(char * const p) {
    p[0] = 'A';
}

int maini3() {
    int x1 = 1;

    int *x2 = new int;
    *x2 = 2;
    changeInt(x2);
    std::cout << *x2 << std::endl;
    delete x2;

    const char * g = "abc";
    g = "cde";
    foo(g);

    std::cout << g << std::endl;

    const char * a = "aaa";
    //    bar(a);
    std::cout << a << std::endl;
    return 0;
}



