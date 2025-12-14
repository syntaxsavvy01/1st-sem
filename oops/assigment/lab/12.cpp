// WAP in C++ to demonstrate Derived class constructor.

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "This is Base Class.\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "This is Derived Class.\n";
    }
};

int main()
{
    Derived d;
    return 0;
}