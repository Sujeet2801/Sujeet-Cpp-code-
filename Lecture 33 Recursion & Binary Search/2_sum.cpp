#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    // int sum = 0;

    // Base condition
    if(n == 0)
        return 0;

    // int smallProblem = sumOfElements(arr + 1,n - 1);
    // int bigProblem = arr[0] + smallProblem;
    else
        return arr[0] + sum(arr + 1, n-1);
}

int main()
{

    int arr[7] = {1,2,3,45,85};
    int n = 5;

    int ans = sum(arr, n);
    cout << ans << endl;

    return 0;
}