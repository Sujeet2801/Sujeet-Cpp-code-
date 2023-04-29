// Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main()
{

    int num, queotient, rem, sum;
    cout << "Enter the five digit number:- " << endl;
    cin >>num;

    queotient = num / 10000;
    rem = num % 10;

    sum = queotient + rem;
    cout<<queotient<<endl;
    cout<<rem<<endl;

    cout<<"Sum of first and last digit is:- "<< sum ;
    return 0;
}