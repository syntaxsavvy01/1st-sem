// WAP in C++ to overload insertion (>>) & extraction (<<) operators for objects

#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    friend ostream &operator<<(ostream &out, const Student &S);
    friend istream &operator>>(istream &in, Student &S);
};

istream &operator>>(istream &in, Student &S)
{
    cout << "Enter the name: ";
    in >> S.name;
    cout << "Enter the roll number: ";
    in >> S.roll;
    return in;
}

ostream &operator<<(ostream &out, const Student &S)
{
    out << S.name << " have roll " << S.roll << endl;
    return out;
}

int main()
{
    Student Std;
    cin >> Std;
    cout << Std;
    return 0;
}