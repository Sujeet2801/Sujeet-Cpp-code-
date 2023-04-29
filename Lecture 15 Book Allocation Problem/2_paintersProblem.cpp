#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int noOfPainters = 1;
    int unitOfBoard = 0;

    for(int i=0; i<n; i++)
    {
        if(unitOfBoard + arr[i] <= mid)
        {
            unitOfBoard += arr[i];
        }
        else
        {
            noOfPainters++;
            if(noOfPainters > m || arr[i] > mid)
            {
                return false;
            }
            unitOfBoard = arr[i];
        }
    }
    return true;
}

int paintersProblem(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{

    int arr[4] = {5,5,5,5};
    int n = 4;
    int m = 2;

    cout << "Minimum no. of units --> " << paintersProblem(arr,n,m);

    return 0;
}