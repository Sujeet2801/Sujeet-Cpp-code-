//  Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main()
{

    int num, first, second, third, sum;
    cout << "Enter the 3 digit number:- " << endl;
    cin >> num;

    first = num / 100; // 1
    num = num % 100;   // 23
    second = num / 10; // 2
    third = num % 10;  // 3

    sum = first + second + third ;
    cout<<"Sum of digit is "<<sum;
    return 0;
}