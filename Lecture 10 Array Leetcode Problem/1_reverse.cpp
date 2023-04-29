// Reverse an array

#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s < e)
    {
        cout << "Start --> " << s << " " << "End --> "<< e ;
        cout << endl;

        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    //Print reverse array
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size --> ";
    cin >> size;

    int arr[5000];

    cout << "Enter the elements --> ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr,size);

    return 0;
}