#include<iostream>
using namespace std;

int lastOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) // move in right part of array
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int firstOccurance(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) // move in right part of array
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int arr[7] = {1,2,3,3,4,5,6};
    int n = 7;

    cout << "First occurance of 3 is at index " << firstOccurance(arr,n,3) << endl;
    // cout << "Last occurance of 3 is at index " << lastOccurance(arr,n,3) << endl;

    return 0;
}