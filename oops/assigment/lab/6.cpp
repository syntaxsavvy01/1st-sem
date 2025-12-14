// WAP in C++ to overload unary minus '- 'operator.
#include <iostream>
using namespace std;

class Minus
{
private:
    int x;

public:
    Minus(int a)
    {
        x = a;
    }

    Minus operator-()
    {
        return -x;
    }

    void put()
    {
        cout << "updated value of X: " << x << endl;
    }
};

int main()
{
    Minus M(8);
    Minus N = -M;
    N.put();
    return 0;
}