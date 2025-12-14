// WAP in C++ to create a class called as Book.Data members are name of the Book &price.Write Default, parameterized &copy
// constructors to initialize &display Book object values.

#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    float price;
    string name;

public:
    Book()
    {
        price = 0.0;
        name = "unknown";
    }

    Book(float p, string n)
    {
        price = p;
        name = n;
    }

    Book(const Book &b)
    {
        price = b.price;
        name = b.name;
    }

    void put()
    {
        cout << "Name: " << name;
        cout << "\nPrice: " << price;
    }
};

int main()
{
    Book B(695.90, "Sonnets");
    cout << "original copy" << endl;
    B.put();

    Book Bc = B;
    cout << "\nCopied content" << endl;
    Bc.put();
    return 0;
}