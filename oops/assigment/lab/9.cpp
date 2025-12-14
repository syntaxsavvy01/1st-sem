// Write a Program to demonstrate Static Data Members and Static Member Functions in C++

#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    int price;
    string name;
    static string company;
    static int counter;

public:
    car()
    {
        price = 0;
        name = "unknown";
    }

    car(int p, string n)
    {
        price = p;
        name = n;
        counter++;
    }

    static void count()
    {
        cout << "Total number of car is " << counter;
    }
};

int car::counter = 0;
string car::company = "TOYOTA";

int main()
{
    car c(645, "sdf"), C(435, "ase");
    car::count();
    return 0;
}