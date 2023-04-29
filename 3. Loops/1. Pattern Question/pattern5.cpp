// 11111
// 2   2
// 3   3
// 44444


#include <iostream>
using namespace std;

int main()
{

    int n,m;
    cout << "Enter the no. of rows" << endl;
    cin >> n>>m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {   if(i==1 || j==1 || i==n || j==m){
                cout<< i;
            }
            else{
                cout<<" ";
            }
        }
        
        cout << endl;
    }

    return 0;
}