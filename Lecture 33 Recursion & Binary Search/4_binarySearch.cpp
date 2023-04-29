#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

int binarySearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);
    // Base condition
    if(s > e)
        return false;

    int mid = s + (e-s)/2;
    cout << "Value of mid is " << arr[mid] << endl;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
    cout << endl;
}

int main()
{
    
    int arr[12] = {3,4,5,6,7,8,10,23,45,65,78,98};
    int n = 12;
    int key = 98;
    cout << endl; 

    bool ans = binarySearch(arr, 0, n-1, key);

    if(ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }

    return 0;
}