// WAP in C++ to create a class called as student. Data members are rollno, name & fees of the student. Write appropriate get ()
// & put () functions to scan and display the student data.

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int roll;
    string name;

public:
    void get()
    {
        cout << "Enter the roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter the name: ";
        getline(cin, name);
    }

    void put()
    {
        cout << "**********Student info**********";
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
    }
};

int main()
{
    student s;
    s.get();
    s.put();
    return 0;
}