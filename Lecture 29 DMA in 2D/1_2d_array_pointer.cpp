#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Creating an dynamic array
    int **arr = new int *[n];

    for(int i=0; i<n; i++)
    {
        arr[i] = new int[n];
    }

    // for taking input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // for output 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    // release memory
    for(int i=0; i<n; i++)
        {
            delete [] arr[i];
        }
    delete []arr;

    return 0;
}