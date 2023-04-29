#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    int a = 0, b = 1;
    int ans;
    for(int i=3; i<=n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}

int fib(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;
    
    return fib(n-1) + fib(n-2);
}

int main()
{

    int n;
    cout << "Enter the number --> ";
    cin >> n;

    int ans = fib(n);
    //cout << fibonacci(n) << endl;

    cout << ans << endl;

    return 0;
}