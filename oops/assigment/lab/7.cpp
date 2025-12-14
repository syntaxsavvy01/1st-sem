// WAP in C++ to create a class called as Distance, members are ft &in.Assign appropriate values to objects D1 & D2 and add
// their values by overloading binary + operator to store the result in D3.

#include <iostream>
using namespace std;

class Distance
{
private:
    int ft, in;

public:
    Distance()
    {
        ft = in = 0;
    }

    Distance(int f, int i)
    {
        ft = f;
        in = i;
    }

    Distance operator+(Distance D)
    {
        Distance temp;
        temp.ft = ft + D.ft;
        temp.in = in + D.in;
        if (temp.in >= 12)
        {
            temp.ft += (temp.in / 12);
            temp.in = (temp.in % 12);
        }
        return temp;
    }

    void result()
    {
        cout << "Result: " << ft << " ft " << in << " in\n\n";
    }
};

int main()
{
    Distance D1(2, 3);
    Distance D2(2, 13);
    Distance D3 = D1 + D2;
    D3.result();
    return 0;
}