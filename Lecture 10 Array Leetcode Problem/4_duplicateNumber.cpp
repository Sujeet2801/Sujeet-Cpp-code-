#include<iostream>
using namespace std;

int dupilcateNumber(int arr[], int n)
{
    int ans = 0;

    // XOR of all array elements
    for(int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR of [1,n-1]
    for(int i=0; i<n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[50] = {4,4,5,1,2,3};
    int n = 6;

    cout << "Duplicate number is --> "; 
    cout <<  dupilcateNumber(arr,n) << endl;

    return 0;
}