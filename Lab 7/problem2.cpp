#include "problem2.h"
Base::Base(int a) : basedata(a) {
    cout << "Base Constructor" << endl;
}
Base::~Base() {
    cout << "Base Destructor" << endl;
}
Derived1::Derived1(int a, int b)
    : Base(a), derived1data(b) {
    cout << "Derived1 Constructor" << endl;
}
Derived1::~Derived1() {
    cout << "Derived1 Destructor" << endl;
}
Derived2::Derived2(int a, int b, int c)
    : Derived1(a, b), derived2data(c) {
    cout << "Derived2 Constructor" << endl;
}
Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}
void Derived2::print() {
    cout << "Derived2::print()" << endl;
    cout << "Base Data: " << basedata << endl;
    cout << "Derived1 Data: " << derived1data << endl;
    cout << "Derived2 Data: " << derived2data << endl;
}
