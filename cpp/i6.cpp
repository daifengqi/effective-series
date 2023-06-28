#include <iostream>

// Explicitly disallow the use of compiler- generated functions you do not want.

class HomeForSale {
public:
    double price;
private:
    HomeForSale(const HomeForSale &) = delete;

    HomeForSale &operator=(const HomeForSale &) = delete;
};

class Uncopyable {
protected:
    Uncopyable() = default;

    ~Uncopyable() = default;

private:
    Uncopyable(const Uncopyable &);

    Uncopyable &operator=(const Uncopyable &);
};


class HomeForSaleNew : private Uncopyable {
};


int i6() {
    HomeForSaleNew h1;

    // below both will give error
    // HomeForSaleNew h2(h1);
    // HomeForSaleNew h3 = h1;
}



