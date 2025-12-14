// WAP in C++ to implement friend function acting as a bridge between the two classes
#include <iostream>
using namespace std;

class ClassB;

class ClassA
{
private:
    int x;

public:
    ClassA(int p)
    {
        x = p;
    }

    friend void BridgeFunction(ClassA, ClassB);
};

class ClassB
{
private:
    int y;

public:
    ClassB(int q)
    {
        y = q;
    }

    friend void BridgeFunction(ClassA, ClassB);
};

void BridgeFunction(ClassA a, ClassB b)
{
    cout << "The result is " << a.x + b.y << ".\n\n";
}

int main()
{
    ClassA A(5);
    ClassB B(4);
    BridgeFunction(A, B);

    return 0;
}