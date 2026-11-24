
#ifndef PROBLEM2_H
#define PROBLEM2_H

#include <iostream>
using namespace std;
class Base {
protected:
    int basedata{};
public:
    Base(int a);
    ~Base();
};
class Derived1 : public Base {
protected:
int derived1data{};
public:
    Derived1(int a, int b);
    ~Derived1();
};
class Derived2 : public Derived1 {
private:
    int derived2data{};
public:
    Derived2(int a, int b, int c);
    ~Derived2();
    void print();
};

#endif
