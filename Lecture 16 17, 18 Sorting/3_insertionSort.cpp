#include<iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}


int main()
{
    int n;
    cout<<"Enter the size: ";
    cin >> n;

    int arr[n];

    inputArray(arr,n);

    insertionSort(arr, n);
   
    printArray(arr,n);

    return 0;
}