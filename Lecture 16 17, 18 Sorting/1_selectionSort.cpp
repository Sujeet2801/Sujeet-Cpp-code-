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

void selectionSort(int arr[], int n)
{
    for(int i=0; i<(n-1); i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin >> n;

    int arr[n];

    inputArray(arr,n);

    selectionSort(arr, n);
   
    printArray(arr,n);

    return 0;
}