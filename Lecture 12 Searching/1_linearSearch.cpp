
#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

bool linearSearch(int arr[], int n, int key)
{
    print(arr,n);
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
            return true;
    }
    return false;
}

int main()
{

    int arr[6] = {3,4,5,6,7,8};
    int n = 6;
    int key = 8;

    bool ans = linearSearch(arr, n, key);

    if(ans)
    {
        cout << "Found" << endl;
    }

    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}

/*
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    if(n==0)
        return false;

    if(arr[0]==key)
        return true;
    else
    {
        return linearSearch(arr+1,n-1,key);
    }
}

int main()
{

    int arr[6] = {1,3,4,7,5,6};
    int n = 6;
    int key = 7;

    bool ans = linearSearch(arr,6,15);
    
    if(ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }


    return 0;
}*/