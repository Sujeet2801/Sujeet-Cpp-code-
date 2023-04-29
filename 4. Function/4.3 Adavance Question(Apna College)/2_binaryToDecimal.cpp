// Convert binary number into decimal number 

#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;

    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    cout<<"The decimal value of binary value is: "<<ans<<endl;
}

int main(){

    int n;
    cout<<"Enter the binary value:- ";
    cin>>n;

    binaryToDecimal(n);

    return 0;
}