#include<iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void bubblesort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        bool swapped = false;
        for(int j=0; j<(n-i); j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin >> n;

    int arr[n];

    inputArray(arr,n);

    bubblesort(arr, n);
   
    printArray(arr,n);

    return 0;
}
