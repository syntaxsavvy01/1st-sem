// Write a C++ program to demonstrate hierarchical inheritance. Create a base class Person and two derived classes Student and
//  Employee. Accept and display details for both classes separately.

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getP()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }
};

class Student : public Person
{
protected:
    string college;
    int roll;

public:
    void getS()
    {
        getP();
        cout
            << "Enter the college: ";
        cin >> college;
        cout << "Enter the roll: ";
        cin >> roll;
    }

    void putS()
    {
        cout << "***********STUDENT INFO***********" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Coll: " << college << endl;
        cout << "Roll: " << roll << endl;
    }
};

class Employee : public Person
{
protected:
    string company;
    int e_id;

public:
    void getE()
    {
        getP();
        cout
            << "Enter the name of the company: ";
        cin >> company;
        cout << "Enter the e_ID: ";
        cin >> e_id;
    }

    void putE()
    {
        cout << "***********EMPLOYEE INFO***********" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "company: " << company << endl;
        cout << "e_ID: " << e_id << endl;
    }
};

int main()
{
    Student S;

    S.getS();

    Employee E;
    E.getE();

    S.putS();
    cout << endl
         << endl;
    E.putE();
    return 0;
}