//  Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.

#include <iostream>
using namespace std;

int main()
{

    int sp, cp, profit, loss;
    cout << "Enter the value of cost price:- " << endl;
    cin >> cp;

    cout << "Enter the value of selling price:- " << endl;
    cin >> sp;

    if (sp > cp)
    {
        profit = sp - cp;
        cout << "profit of Rs " << profit << endl;
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        cout << "loss of Rs " << loss << endl;
    }
    else
    {
        cout << "No profit no loss " << endl;
    }

    return 0;
}