/*#include<iostream>
using namespace std;

int main(){

    int array[] = {2,5,3,10,4};
    int key = 10;
    int ans = -1;
    for(int i=0; i<5; i++){
        if(array[i]==key){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;

bool linaerSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return true;
            break;
        }
    }
    return false;
}

int main(){

    int arr[10] = { 2, 3, -5, 6, 7, 8, 1, 29, -6, -3};

    int key;
    cout<<"Enter the element is search for:- "<< endl;
    cin >> key;

    bool found = linaerSearch(arr, 10, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    return 0;
}