//  Print the factorial of given number


#include<iostream>
using namespace std;

int main(){

    int n,ans=1;
    cout<< "Enter the number:-"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
            ans = ans * i; 
        }
        cout<<ans<<endl;
    

    return 0;
}