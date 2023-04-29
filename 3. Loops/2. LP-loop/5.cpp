// Given two numbers and b Find a raise to the power b


#include<iostream>
using namespace std;

int main(){

    int a,b, ans=1;
    cout<< "Enter the number:-"<<endl;
    cin>>a>>b;

    for(int i=1; i<=b; i++){
        ans = ans * a; 
    }
    cout<<ans<<endl;
    return 0;
}