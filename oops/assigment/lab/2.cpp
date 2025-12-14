// WAP in C++ to create a class called as employee. Data members are eid, sal& name of the employee. Scan the data for 10 such
// employees & display the same by using array of objects.

#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    int eid;
    float sal;
    string name;

public:
    void get()
    {
        cout << "Enter the employee ID: ";
        cin >> eid;
        cin.ignore();
        cout << "Enter the name of the employee: ";
        getline(cin, name);
        cout << "Enter the salary of the employee: ";
        cin >> sal;
    }
    void put()
    {
        cout << "\n\n**********EMPLOYEE DETAILS**********\n";
        cout << "E_ID:      " << eid;
        cout << "\nName:    " << name;
        cout << "\nSalary:  " << sal;
    }
};

int main()
{
    employee e[10];

    for (int i = 0; i < 10; i++)
    {
        e[i].get();
    }

    for (int i = 0; i < 10; i++)
    {
        e[i].put();
    }

    return 0;
}