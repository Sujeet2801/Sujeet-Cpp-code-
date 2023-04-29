#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // Base case
    if(n == 0 || n == 1)
        return true;

    if(arr[0] > arr[1])
        return false; 

    else{
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}

int main()
{

    int arr[7] = {2, 4, 6, 9, 11, 13};
    int n = 6;

    bool ans = isSorted(arr, n);

    if(ans)
    {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}