// WAP in C++ to create a class called as student, having member as roll_no &name of the student.Create another class Exam having
// members as mark1 &mark2.Finally create a class called result which is derived from student &Exam.Write a show function in it to
// show student info &percentage of marks scored using Multiple Inheritance.

#include <iostream>
using namespace std;

class student
{
public:
    int roll_no;
    string name;

    void getS()
    {
        cout << "Enter the name of the student ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll_no;
    }
};

class Exam
{
public:
    float mark1;
    float mark2;

    void getE()
    {
        cout << "Enter the mark1: ";
        cin >> mark1;
        cout << "Enter the mark2: ";
        cin >> mark2;
    }
};

class result : public student, public Exam
{
public:
        void show()
    {
        float per = ((mark1 + mark2) / 2);
        cout << "*************Student info*************" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll_no << endl;
        cout << "Mark1: " << mark1 << endl;
        cout << "Mark2: " << mark2 << endl;
        cout << "Percentage: " << per << endl;
    }
};

int main()
{
    result r;
    r.getS();
    r.getE();
    r.show();
    return 0;
}