#include<iostream>
using namespace std;

bool bianrySearchInMatrix_2(int arr[][3], int rows, int cols, int target)
{
    int rowIndex = 0;
    int colIndex = cols - 1;

    while(rowIndex < rows && colIndex >= 0) 
    {
        int element = arr[rowIndex][colIndex];

        if(element == target)
            return true;

        if(element < target)
            rowIndex ++;

        else
            colIndex--;
        
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

    bool ans = bianrySearchInMatrix_2(arr,3,3,target);

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