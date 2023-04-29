#include<iostream>
using namespace std;

// Search an element

bool isfound(int arr[][4], int target, int row, int col)
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }  
    }
    return 0;
}

int main()
{

    // Create a 2D array
    int arr[3][3];
    cout << "Enter the element --> ";

    // taking input - row wise
    for(int rows=0; rows<3; rows++)
    {
        for(int col=0; col<3; col++)
        {
            cin >> arr[rows][col];
        }
    }

    /*
    // taking input - col wise
    for(int col=0; col<4; col++)
    {
        for(int rows=0; rows<3; rows++)
        {
            cin >> arr[rows][col];
        }
    }
    */

    // print array
        for(int rows=0; rows<3; rows++)
    {
        for(int col=0; col<3; col++)
        {
            cout <<  arr[rows][col] << " ";
        }cout << endl;
    }

    int target ;
    cout << "Enter the number --> ";
    cin >> target;

    /*
    if(isfound(arr,target,3,4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    */

    return 0;
}