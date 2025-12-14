// WAP to Demonstrate the Use of new and delete Operators in C++
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int; // general variable created using new
    *ptr = 50;
    cout << "Value of *ptr: " << *ptr << endl;

    int *arr = new int[5]; // array created with new

    // assinging value to the array
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value for index: " << i << endl;
        cin >> arr[i];
    }

    // dispalying array value
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "   ";
    }

    delete ptr;
    cout << "*ptr releases memory.\n";
    delete[] arr;
    cout << "Array releases memory.\n";
    return 0;
}