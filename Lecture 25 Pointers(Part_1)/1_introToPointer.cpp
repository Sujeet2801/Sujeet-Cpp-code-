#include<iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << "Value of num is --> " << num << endl;
    cout << "Address of num is --> " << &num << endl;
    cout << endl;

    // Create a pointer ptr to int
    int *ptr = &num;
    cout << "Address of ptr is --> " << ptr << endl;
    cout << "Value of ptr is --> " << *ptr << endl;
    cout << endl;

    // Create a pointer ptr to double
    double d = 4.2;
    double *p2 = &d;
    
    // Print address of d
    cout << "Address of d is --> " << &d << endl;
    cout << "Address of d is --> " << p2 << endl;

    // Print value of d
    cout << "Value of p2 is --> " << *p2 << endl;
    cout << "Value of p2 is --> " << d << endl;
    cout << endl;

    // sizeof operator
    cout << "Size of interger is --> " << sizeof(num) << endl;
    cout << "Size of pointer is --> " << sizeof(ptr) << endl;
    cout << "Size of pointer is --> " << sizeof(p2) << endl;


    return 0;
}