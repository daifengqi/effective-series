#include <cstdio>

// Chapter 8: Customizing new and delete

class CustomizeClass {
    static const int BLOCK_SIZE = 10;  // Allocate 10 objects at a time
    static char *memoryPool;           // Memory pool
    static int currentBlock;          // Current block in memory pool
    static int currentObject;         // Current object in current block

public:
    void *operator new(size_t size) {
        if (currentObject == BLOCK_SIZE) {  // If current block is full, allocate a new one
            memoryPool = new char[BLOCK_SIZE * size];
            currentBlock++;
            currentObject = 0;
        }

        void *object = memoryPool + (currentBlock - 1) * BLOCK_SIZE * size
                       + currentObject * size;
        currentObject++;
        return object;
    }

    void operator delete(void *object) {
        // Do nothing - we don't deallocate individual objects
    }

    // We need a custom deallocation to deallocate all objects
    static void DeallocateAll() {
        delete[] memoryPool;
        memoryPool = nullptr;
        currentBlock = 0;
        currentObject = 0;
    }
};

// Memory pool
char *CustomizeClass::memoryPool = nullptr;
int CustomizeClass::currentBlock = 0;
int CustomizeClass::currentObject = 0;

void i50() {
    auto *object1 = new CustomizeClass();
    // Use object1

    auto *object2 = new CustomizeClass();
    // Use object2

    // Deallocate all objects at once
    CustomizeClass::DeallocateAll();
}