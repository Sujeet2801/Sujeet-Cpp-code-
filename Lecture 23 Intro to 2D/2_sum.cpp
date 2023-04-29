#include<iostream>
using namespace std;

void largestRowSum(int arr[][4], int row, int col)
{
    int max = 0;
    int rowIndex = -1;
    
    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<4; j++)
        { 
            sum += arr[i][j];

            if(sum > max)
            {
                max = sum;
                rowIndex = i;
            }
        }
    }
        cout <<"Maximum row sum is --> " <<  max << endl;
        cout <<"Maximum row sum at index is --> " << rowIndex;

}

void getSum(int arr[][4], int row, int col)
{

    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<4; j++)
        { 
            sum += arr[j][i];
        }
        cout << "Sum of " << i << " row is --> " << sum << endl;;

    }
}

int main()
{
    // Creating a 2D array
    int arr[3][4];
    cout << "Enter the element --> ";

    // taking input
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        { 
            cin >> arr[i][j];
        }
    }

    // Print array
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        { 
            cout << arr[i][j] << " ";
        }cout << endl;
    }

     getSum(arr,3,4);
    // largestRowSum(arr,3,4);

    return 0;
}  