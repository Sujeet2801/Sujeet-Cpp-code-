#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                if(arr[i] <= arr[j])
                {
                    cout << arr[i] << " " << arr[j];
                }
                else
                {
                    cout << arr[j] << " "  << arr[i] ;
                }
                i++; j++;
            }
        }
        cout << endl;
    }
}

int main()
{

    int size;
    cout << "Enter the size --> ";
    cin >> size;

    int sum;
    cout << "Enter the sum --> ";
    cin >> sum;

    int arr[5000];

    cout << "Enter the elements --> ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    pairSum(arr,size,sum);

    return 0;
}