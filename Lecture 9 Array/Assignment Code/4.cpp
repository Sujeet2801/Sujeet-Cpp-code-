// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
//  that they belong to different arrays and are not at the same index. Here 1<size<101


#include<iostream>
using namespace std;

int main(){

    int n1, n2;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    int min = arr1[0];

    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    // for(int i=0; i<n1; i++){
    //     cin>>arr2[i];
    // }

    for(int i=0; i<n1; i++){
        if(arr1[i]<arr1[i+1]){
            min = arr1[i];
        }
    }
        cout<<min<<" ";

    return 0;
}