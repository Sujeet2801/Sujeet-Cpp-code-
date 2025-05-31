#include<iostream>
#include<unordered_set>
using namespace std;

void pairSumOptimized(int arr[], int size, int target) {
    unordered_set<int> seen;

    for(int i = 0; i < size; i++) {
        
        int complement = target - arr[i];
        if(seen.count(complement)) {
            arr[i] < complement ?
                cout << arr[i] << " " << complement << endl :
                cout << complement << " " << arr[i] << endl;
        }
        seen.insert(arr[i]);
    }
}

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
