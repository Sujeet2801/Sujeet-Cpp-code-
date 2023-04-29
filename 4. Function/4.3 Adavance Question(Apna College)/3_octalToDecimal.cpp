#include<iostream>
using namespace std;

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n>0){
        int rem = n%10;
        ans += x*rem;
        x *= 8;
        n /= 10;
    }
    cout<<"The decimal number of given octal number is: "<<ans<<endl;
}

int main(){

    int n;
    cout<<"Enter the octal number: ";
    cin>>n;

    octalToDecimal(n);

    return 0;
}