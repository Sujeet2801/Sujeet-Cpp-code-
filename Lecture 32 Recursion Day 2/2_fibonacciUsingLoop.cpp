#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int n)
{
    int x, y, z;
    int size = n - 1;
    x = 0;
    y = 1;
    z = 0;

    while(z < size)
    {
        cout << z << " ";
        x = y;
        y = z;
        z = x + y;
    }
}

int main()
{

    int n;
    cout << "Enter the number --> ";
    cin >> n;

    int ans = fibonacci(n);

    cout << ans << endl;

    return 0;
}
