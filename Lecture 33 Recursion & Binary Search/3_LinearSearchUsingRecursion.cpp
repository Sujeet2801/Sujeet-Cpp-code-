#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

bool linearSearch(int arr[], int n, int key)
{
    print(arr,n);
    // Base Condition 
    if(n == 0)
        return false;

    if(arr[0] == key)
        return true;

    else
    {
        bool reamaningPart = linearSearch(arr + 1, n - 1, key);
        return reamaningPart;
    }
}

int main()
{

    int arr[19] = {3,4,5,6,7,8};
    int n = 6;
    int key = 11;

    bool ans = linearSearch(arr, n, key);

    if(ans)
    {
        cout << "Found" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}