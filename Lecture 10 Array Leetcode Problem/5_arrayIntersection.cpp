#include<iostream>
using namespace std;

void arrayIntersection(int arr1[], int n1, int arr2[], int n2)
{
    for(int i=0; i<n1; i++)
    {
        int element = arr1[i];

        for(int j=0; j<n2; j++)
        {
            if(element == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[20] = {1,2,3,4};
    int arr2[20] = {1,2,3,4};
    int n1 = 4;
    int n2 = 4;

    cout << "[ ";
    arrayIntersection(arr1,n1,arr2,n2);
    cout << "]";

    return 0;
}