#include<iostream>
using namespace std;

void rotate(int arr[][3],int n)
{
    // Transpose the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
           int temp = 0;
           temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp; 
        }
    }

    // Reverse the transpose array
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            int temp = 0;
            temp = arr[i][j];
            arr[i][j] = arr[i][n-1-j];
            arr[i][n-1-j] = temp;
        }
    }
}

int main()
{

    int arr[3][3];
    cout << "Enter the elements --> ";

    // taking input
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        { 
            cin >> arr[i][j];
        }
    }

    // Print array
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        { 
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    rotate(arr,3);

    // Print array
    cout << "Rotated matrix of given matrix is : " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        { 
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    return 0;
}