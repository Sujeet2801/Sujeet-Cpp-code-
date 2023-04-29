// 1234
// 2341
// 3412
// 4123

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the no. of rows" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}