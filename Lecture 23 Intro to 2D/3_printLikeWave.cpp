#include<iostream>
using namespace std;

void printWave(int arr[][3], int rows, int cols)
{
    for(int col=0; col<cols; col++)
    {
        if(col&1)
        {
            for(int row = rows-1; row>=0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for(int row=0; row<rows; row++)
            {
                cout << arr[row][col] << " ";
            }
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
        }
        cout << endl;
    }

    printWave(arr,3,3);

    return 0;
}