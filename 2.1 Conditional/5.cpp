// - Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.

#include <iostream>
using namespace std;

int main()
{

    char op;
    float num1, num2;

    cout << "Enter the opartor (+,-,*,/):-" << endl;
    cin >> op;

    cout << "Enter the value of num1 and num2:-" << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "num 1 + num 2 = " << num1 + num2 << endl;
        break;

    case '-':
        cout << "num 1 - num 2 = " << num1 - num2 << endl;
        break;

    case '*':
        cout << "num 1 * num 2 = " << num1 * num2 << endl;
        break;

    case '/':
        cout << "num 1 / num 2 = " << num1 / num2 << endl;
        break;

    default:
        break;
    }

    return 0;
}