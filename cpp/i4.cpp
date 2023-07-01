#include <iostream>

// Item 4. Make sure that objects are initialized before they’re used.


class Creature {
private:
    std::string m_name;

public:
    Creature(const std::string &name)
            : m_name{name} {
    }
};

/* (3) */
//template <typename T,
//        std::enable_i/**/f_t<
//        std::is_convertible_v<std::remove_cvref_t<T>, std::string>,
//        int> = 0
//                >
//Creature(T&& name) : m_name{std::forward<T>(name)} { }

class Entry {
public:
    Entry(std::string name, std::string address);

    void print() {
        std::cout << this->theName << " : " << this->theAddress << std::endl;
    }

private:
    std::string theName;
    std::string theAddress;
};

Entry::Entry(std::string name, std::string address)
        : theName(std::move(name)), theAddress(std::move(address)) {}


int i4() {
    std::cout << "Hello!" << std::endl;
    auto *e = new Entry("John", "London");

    e->print();
}



