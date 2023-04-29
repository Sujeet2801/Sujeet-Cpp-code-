#include <iostream>
using namespace std;

int oddNumbers(int b)
{
    if (b % 2 == 1)
    {
        cout << b << " ";
    }
    return 0;
}


int main()
{

    int a, b, n;
    cout << "Enter the first number = ";
    cin >> a;
    cout << "Enter the second number = ";
    cin >> b;

    cout << "Odd numbers are = ";
    for (n = a; n <= b; n++)
    {
        oddNumbers(n);
    }

    return 0;
}