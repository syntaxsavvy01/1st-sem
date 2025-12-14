// WAP to create a class named Shape that overloads a function area() to calculate the following : Area of a Circle, Area of
// a Rectangle, Area of a Triangle.Use the concept of Function Overloading
#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
private:
    float radius, length, breadth, base, height;

public:
    Shape()
    {
        radius = length = breadth = base = height = 0.0;
    }

    float area(float r)
    {
        radius = r;
        return M_PI * pow(radius, 2);
    }

    float area(float l, float b)
    {
        length = l;
        breadth = b;
        return length * breadth;
    }

    float area(float b, float h, bool is_trianlge)
    {
        base = b;
        height = h;
        return 0.5 * base * height;
    }
};

int main()
{
    Shape S;
    cout << "Area of circle: " << S.area(3.14);
    cout << "\nArea of rectangle: " << S.area(5, 5);
    cout << "\nArea of triangle: " << S.area(5, 5, true);
    return 0;
}