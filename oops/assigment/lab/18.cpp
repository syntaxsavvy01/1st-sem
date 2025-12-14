// WAP to implement function Template.

#include <iostream>
using namespace std;

template <typename T>

void sQr(T a)
{
    cout << "Square of " << a << " is " << a * a;
}
int main()
{

    sQr(6);
    return 0;
}