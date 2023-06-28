#include <iostream>

class Entry {
public:
    Entry(std::string  name, std::string  address);

    void print() {
        std::cout << this->theName << " : " << this->theAddress << std::endl;
    }
private:
    std::string theName;
    std::string theAddress;
};

Entry::Entry(std::string name, std::string address)
: theName(std::move(name)), theAddress(std::move(address))
{}



int i4() {
    std::cout << "Hello!" << std::endl;
    auto* e = new Entry("John", "London");

    e->print();
}



