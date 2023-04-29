// Find the sum of the following series
// 1 - 2 + 3 - 4 … n


#include<iostream>
using namespace std;

int main(){

    int n,sum=0;
    cout<< "Enter the number:-"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}