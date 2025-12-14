// Write a C++ program to demonstrate the concept of Exception Handling using try, catch, and throw keywords.The program should
// accept two numbers from the user and perform division.If the denominator is zero, an exception should be thrown and handled
// appropriately to display an error message instead of terminating the program.

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;
    try
    {
        if (b == 0)
        {
            throw "Divisible not possible.";
        }
        cout << a / b;
    }

    catch (const char *msg)
    {
        cout << "Error encountered: " << msg;
    }
    return 0;
}