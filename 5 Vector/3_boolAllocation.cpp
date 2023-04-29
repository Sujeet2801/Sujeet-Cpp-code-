
#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++)
    {
        if(pageSum + arr[i] <= mid)
        {
            pageSum = arr[i];
        }
        else
        {
            studentCount++;

            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];

        }
    }
    return true;
}

int allocatedBook(int arr[], int n, int m)
{
    int start = 0;
    long long  sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(end<=start)
    {
        if(isPossibleSolution(arr,n,m,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
	// Number of pages in books
	int arr[] = { 10,20,30,40 };
	int n = sizeof arr / sizeof arr[0];
	int m = 2; // No. of students

	cout << "Minimum number of pages = "
		<< allocatedBook(arr, n, m) << endl;
	return 0;
}