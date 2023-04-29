#include<iostream>
using namespace std;

int main()
{
    // pointer to int is created, and pointing to some value
    // int *p = 0;
    // cout << *p << endl;

    /*
    int i = 5;
    cout << i << endl;
    cout << &i << endl;

    //q is a pointer to int
    int *q = &i;
    cout << *q << endl;
    cout << q << endl;
    */

    /*
    // a copy of value of num is passed in a

    int num = 5;
    int a = num; // a = 5
    cout << "a Before --> " << num << endl;   // num = 5
    a++;
    cout << "a After --> " << num << endl;   // num = 5
    */

    /*
    // address of num is passed in p

    int num = 5;
    int *q = &num;
    cout << "Before --> " << num << endl;   // num = 5
    (*q)++;
    cout << "After --> " << num << endl;   // num = 6   
    

    //copying a pointer

    int *p = q;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    */

    // Important Concept //

    
    int i = 3;
    int *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "Before t --> "<< t << endl;
    t = t + 1;
    cout << "After t --> " <<  t << endl;


    

    return 0;
}