// Write a C++ program to demonstrate runtime polymorphism using virtual functions.Create an abstract base class Shape that
// contains a pure virtual function area().Derive classes Circle and Rectangle from Shape and override the area() function in
// each derived class to calculate and display the area of the respective shapes.

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "The area of circle is " << M_PI * pow(radius, 2) << endl
             << endl;
    }
};

class Rectangle : public Shape
{
private:
    float lenght, breadth;

public:
    Rectangle(float l, float b)
    {
        lenght = l;
        breadth = b;
    }

    void area()
    {
        cout << "The area of rectangle is " << lenght * breadth;
    }
};

int main()
{
    Shape *ptr;
    Circle c(3.14);

    ptr = &c;
    ptr->area();

    Rectangle r(5, 5);
    ptr = &r;
    ptr->area();
    return 0;
}