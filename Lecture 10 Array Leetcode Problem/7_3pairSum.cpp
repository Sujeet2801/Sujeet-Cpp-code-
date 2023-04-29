#include<iostream>
using namespace std;

void pairSum3(int arr[], int n, int s)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " ";
                    i++; j++; k++;
                }
            }
        }
    }
        cout << endl;
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

    pairSum3(arr,size,sum);

    return 0;
}