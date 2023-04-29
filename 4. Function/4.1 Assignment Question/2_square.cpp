#include <iostream>
using namespace std;

int square(int num)
{
    int ans = num * num;
    return ans;
}

int main()
{

    int n;
    cout << "Enter the number = ";
    cin >> n;

    cout << "Square of first " << n << " natural number is :-" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << square(i) << " ";
    }

    return 0;
}