// Swap the alternate elemente in an array

#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    //Print reverse array
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int swapAlternate(int arr[], int n)
{
    for(int i=0; i<n; i+=2)
    {
        if((i+1) < n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size --> ";
    cin >> size;

    int arr[50];

    cout << "Enter the elements --> ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    swapAlternate(arr,size);
    print(arr,size);

    return 0;
}