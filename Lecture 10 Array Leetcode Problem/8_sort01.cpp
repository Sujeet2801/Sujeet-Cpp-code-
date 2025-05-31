#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size) {
    
    int zeroIndex = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            swap(arr[i], arr[zeroIndex]);
            zeroIndex++;
        }
    }
}1

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{

    int arr[10] = {1,0,1,0,0,1,0};
    int n = 7;
    sortOne(arr,n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
