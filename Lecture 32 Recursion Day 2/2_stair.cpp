#include<iostream>
using namespace std;

int climbStairs(int nstairs)
{
    // base condition
    if(nstairs==0)
        return 1;

    if(nstairs<0)
        return 0;

    return climbStairs(nstairs-1) + climbStairs(nstairs-2); 
}

int main()
{
    int n;
    cout << "Enter the number --> ";
    cin >> n;

    cout << climbStairs(n);


    return 0;
}