#include "queation1.h"

Base::Base() : basedata() {
    cout << "this is base Constructor" << endl;
}
Base::~Base() {
    cout << "this is base Destructor" << endl;
}
Derived1::Derived1() : derived1data() {
    cout << "thsi is derived1 Constructor" << endl;
}
Derived1::~Derived1() {
    cout << "this is derived 1 Destructor" << endl;
}
Derived2::Derived2() : derived2data() {
    cout << "this is derived2 Constructor" << endl;
}
Derived2::~Derived2() {
    cout << "Derived2 Destructor" << endl;
}
