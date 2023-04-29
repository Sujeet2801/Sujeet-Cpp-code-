// 1234
// 1  4
// 1  4
// 1234


#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter the no. of rows & columns" << endl;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}