//  Find the sum of digits in a given number n


#include<iostream>
using namespace std;

int main(){

    int n,N;
    cout<< "Enter the number:-"<<endl;
    cin>>n;

    int sum = 0;

    for(int i=0; n>0 ; i++){
        N= n%10;
        n=n/10;
        sum += N;
    // cout<<sum<<endl;

    }
    cout<<sum<<endl;

    return 0;
}