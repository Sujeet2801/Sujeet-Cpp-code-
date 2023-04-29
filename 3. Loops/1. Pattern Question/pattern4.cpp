//   1
//   121
//  12321
// 1234321


#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the no. of rows" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout<< j;
        }
        for(int j=(i-1); j>=1;j--){
            cout<<j;
        }
        cout << endl;
    }

    return 0;
}