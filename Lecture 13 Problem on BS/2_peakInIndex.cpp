#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

int peakInIndex(int arr[], int n)
{
    print(arr,n);

    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    cout << "the value of mid is " << mid << endl;

    while(s < e)
    {
        if(arr[mid] <= arr[mid + 1])
            s = mid + 1;
        else    
            e = mid;

        mid = s + (e-s)/2;
    }
    cout << "the value of peak index is " << arr[s] << endl;
    return s;
}

int main()
{

    int arr[9] = {1,2,3,4,5,4,3,2,1};
    int n = 9;

    int ans = peakInIndex(arr, n);
    cout << "Peak value at index is --> " << ans << endl;

    return 0;
}
