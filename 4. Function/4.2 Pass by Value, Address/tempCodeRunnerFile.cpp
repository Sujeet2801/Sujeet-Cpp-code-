#include<iostream>
using namespace std;

int main(){

    int array[] = {3,10,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum =0;

    for(int i=0; i<size; i++){
        sum+=array[i];
    }
    cout<<sum<<endl;

    return 0;
}