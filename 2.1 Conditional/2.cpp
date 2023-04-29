// Write a program to print absolute value of a number entered by the user.

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the value of num:-" << endl;
    cin >> num;

    if (num >= 0)
    {
        cout << num << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    return 0;
}