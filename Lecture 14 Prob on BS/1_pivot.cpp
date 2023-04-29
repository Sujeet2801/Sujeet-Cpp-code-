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
        cout << "The mid is --> " << mid << endl;
        cout << "The value of mid is --> " << arr[mid ]<< endl;
        cout << endl;

        if(arr[mid] > arr[0])
            s = mid + 1;

        else
        {
            e = mid;
        }
    }
    return s; // or return e; 

}

int main()
{

    int arr[9] = {1,2,3,12,14,15,1};
    int n = 7;

    cout << "Pivot element is --> " << pivot(arr, n) << endl << endl;

    return 0;
}