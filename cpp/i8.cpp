//✦ Destructors should never emit exceptions. If functions called in a destructor may throw,
// the destructor should catch any exceptions, then swallow them or terminate the program.

//✦ If class clients need to be able to react to exceptions thrown during an operation,
// the class should provide a regular (i.e., non-destructor) function that performs the operation.

class DBConnection {
public:
    void close() {};
};

class DBConn {
public:
    // explicitly close the connection
    void close() {
        db.close();
        closed = true;
    }

    ~DBConn() = default;

private:
    DBConnection db;
    bool closed;
};