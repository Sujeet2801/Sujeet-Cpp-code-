//  Write a program which takes the values of length and breadth from user and check if it is
// a square or not

#include <iostream>
using namespace std;

int main()
{

    int length, breath;
    cout << "Enter the value of length and braeth:-" << endl;
    cin >> length >> breath;

    if (length == breath)
    {
        cout << "It is a square" << endl;
    }
    else
    {
        cout << "It is a rectangle" << endl;
    }

    return 0;
}