// Item 41: Understand implicit interfaces and compile- time polymorphism.
// Item 42: Understand the two meanings of typename.

template<typename T>
T add(T a, T b) {
    return a + b;
}

void fi41() {
    int result = add<int>(2, 3);
    auto result2 = add<double>(2.5, 3.7);
}
