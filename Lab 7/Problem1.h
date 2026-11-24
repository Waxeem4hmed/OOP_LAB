#include <iostream>
using namespace std;

class Base {
private:
    int basedata{};

public:
    Base();
    ~Base();
};

class Derived1 : public Base {
private:
    int Derived1Data{};
                public:
        Deriverd1();
        ~Derived1();
    };

class Derived2 : public Derived1{
    private:
    int Derived2Data{};
    public:
    Derived2();
    ~Derived2();
};
