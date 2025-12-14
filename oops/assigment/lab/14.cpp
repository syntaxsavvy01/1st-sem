// WAP in C++ to implement Virtual function for function overriding.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This function is of Base class.\n";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "This function is of Derived class.\n";
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
}