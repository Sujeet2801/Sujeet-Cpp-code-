#include<iostream>
using namespace std;

#define pi 3.14     // Macro

int main()
{
    int r;
    cout << "Enter the number --> ";
    cin >> r;

    double area = pi * r * r;
    cout << "Area is --> ";
    cout << area;

    return 0;
}