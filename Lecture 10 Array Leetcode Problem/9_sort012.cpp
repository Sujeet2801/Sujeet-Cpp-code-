#include<iostream>
using namespace std;

// Dutch National Flag Algorithm
void sortZeroOneTwo(int arr[], int size) {
    int low = 0;        
    int mid = 0;        
    int high = size - 1; 

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else { 
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    int arr[50] = {1,0,0,1,2,0};
    int size = 6;

    sortZeroOneTwo(arr, size);
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
