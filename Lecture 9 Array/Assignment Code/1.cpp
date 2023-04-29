// Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.


#include<iostream>
using namespace std;

int main(){

    int size , count_even=0;
    cout<<"Enter the size of array :- ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            count_even++;
        }
    }
        cout<<"Even Numbers are: "<<count_even<<" "<<endl;
        cout<<"Odd Numbers are: "<<(size-count_even)<<" "<<endl;


    return 0;
}





