#include<iostream>
using namespace std;

void uniqueElement(int arr[], int size){

    for(int i=0; i<size; i++){

        for(int j=i+1; j<size; j++){

            if(arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1; 
            }
        }
    }
    
    int ans = 0;
    for(int i=0; i<size; i++){

        ans = arr[i];
        if(ans > -1){
            cout << ans << " ";
        }
    }
}

int main(){

    int arr[20] = {1,2,3,3,2,4};
    uniqueElement(arr,6);

    return 0;
}