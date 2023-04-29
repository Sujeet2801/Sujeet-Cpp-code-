#include<iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
   // mid = s + (e-s)/2;

    while(s < e)
    {
        int mid = s + (e-s)/2;

        if(arr[mid] > arr[0])
            s = mid + 1;

        else
        {
            e = mid;
        }
    }
    return s;

}

int binarySearch(int arr[], int s, int e, int key)
{
    //print(arr, s, e);
    int mid = s + (e-s)/2;
    while(s <= e)
    {
        mid = s + (e-s)/2;
        // cout << "The value of mid is " << arr[mid] << endl;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key)
            s = mid + 1;

        else
            e = mid - 1;

    }
    return -1;
}

int main()
{

    int arr[7] = {1,12,13,4};
    int n = 4;
    int key = 13;
    int ans = 0;

    int Pivot = pivot(arr,n);

    if( key >= arr[Pivot] && key <= arr[n-1])   
    {   //BS on second line
        ans = binarySearch(arr, Pivot, n-1, key);
    }
    else
    {   //BS on first line
        ans = binarySearch(arr, 0, Pivot - 1, key);
    }
    cout << endl << "Key is at index --> " << ans << endl << endl;

    return 0;
}