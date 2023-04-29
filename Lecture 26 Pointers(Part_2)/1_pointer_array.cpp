#include<iostream>
using namespace std;

int main()
{
   
    /*
    int arr[10] = {23, 122, 41, 67};

    // Print address of array 
    cout << "Address of first memory is --> " << arr << endl;
    cout << "Address of first memory is --> " << &arr << endl;
    cout << "Address of first memory is --> " << &arr[0] << endl;

    // Print values
    cout << "4th --> " << *arr << endl;
    cout << "5th --> " << *(arr) + 1 << endl;
    cout << "6th --> " << *(arr + 1) << endl;

    cout << "7th --> " << arr[2] << endl;           // Formula --> arr[i] == *(arr + i)
    cout << "8th --> " << *(arr + 2) << endl;       //          i[arr] == *(i + arr)                         
    
    int arr1[10] = {23, 122, 41, 67};
    int i = 3;
    cout << i[arr1] << endl;
    */

    /*
    int temp[10] = {1,2};
    cout << "Size of temp is --> " <<  sizeof(temp) << endl;                // 40
    cout << "Size of value of temp is --> " <<  sizeof(*temp) << endl;      // 4
    cout << "Size of address of temp is --> " << sizeof(&temp) << endl;     // 4
    cout << endl;

    int *ptr = &temp[0];
    cout << "Size of pointer --> " << sizeof(ptr) << endl;
    cout << "Size of value of pointer is --> " << sizeof(*ptr) << endl;
    cout << "Size of address of pointer is --> " << sizeof(&ptr) << endl;
    cout << endl;

    int a[20] = {1,2,3,4};
    cout << "Address of a is --> " << &a[0]  << endl;
    cout << "Address of a is --> " << &a  << endl;
    cout << "Address of a is --> " << a  << endl;
    cout << endl;

    int *p = &a[1];
    cout << "Address of p is --> " << p  << endl;
    cout << "Address of a is --> " << &p  << endl;
    cout << "Value of p is --> " << *p  << endl;
    */

   /*
    int arr[10];
    // we can not change the address of array (error generated)     // Important concept
    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    */

    return 0;
}