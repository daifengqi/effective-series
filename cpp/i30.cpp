// Item 30: Understand the ins and outs of inlining.

inline int inlineadd(int a, int b) {
    return a + b;
}

void i30() {
    int result = inlineadd(2, 3); // 5
}

// Use inlining for small, frequently called functions
// Avoid inlining large functions: Inlining large functions can lead to increased code size and reduced performance