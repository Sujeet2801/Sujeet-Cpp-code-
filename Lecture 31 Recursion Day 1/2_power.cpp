#include<iostream>
using namespace std;

int power(int n)
{
    // Base Condition
    if(n == 0)
        return 1;

    //recursive call
    return 2 * power(n-1); 
}

int main()
{

    int n;
    cout << "Enter the number --> ";
    cin >> n;

    int ans = power(n);
    cout << ans ;

    return 0;
}