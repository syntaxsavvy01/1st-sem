// WAP to overload operator to add complex number using friend function.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }

    void result()
    {
        cout << "Reault: " << real << " + " << img << " i.\n\n";
    }
};

int main()
{
    Complex C1(3, 4), C2(4, 4), C3;
    C3 = C1 + C2;
    C3.result();
    return 0;
}