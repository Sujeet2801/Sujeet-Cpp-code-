#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);
    int mid = s + (e-s)/2;
    while(s <= e)
    {
        mid = s + (e-s)/2;
        cout << "The value of mid is " << arr[mid] << endl;

        if(arr[mid] == key)
            return true;

        else if(arr[mid] < key)
            s = mid + 1;

        else
            e = mid - 1;

    }
    return false;
}

int main()
{

    int arr[6] = {3,4,5,6,7,8};
    int n = 6;
    int key = 8;

    bool ans = binarySearch(arr,0,5, key);

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