#include<iostream>
using namespace std;

bool binarySearch(int arr[][3], int n, int target)
{
    int row = 3;
    int col = 3;

    int s = 0;
    int e = (row * col) - 1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        int midElement = arr[mid/col][mid%col];     // Mid element for 2D 

        if(midElement == target)
            return true;

        else if(midElement < target)
            s = mid + 1;

        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main()
{

    int arr[3][3];
    int n = 3;

    int target;
    cout << "Enter the target --> ";
    cin >> target;

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

    bool ans = binarySearch(arr,n,target);

    if(ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}