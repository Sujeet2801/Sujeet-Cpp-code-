#include <iostream>
using namespace std;

int main()
{

    int size = 0, i=0, k=0;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];

    // For taking input
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Array before reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int start = 0;
    int end = size -1;
    
    cout<<"Array after reversing"<<endl;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}