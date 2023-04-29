//  Reverse the digits of a number n


#include<iostream>
using namespace std;

int main(){

    int n,N;
    cout<< "Enter the number:-"<<endl;
    cin>>n;

    cout<<"Number after reversing:-"<<endl;

    for(int i=1; n>0; i++){
        N=n%10;
        cout<<N;
        n/=10;
    }
        

    return 0;
}