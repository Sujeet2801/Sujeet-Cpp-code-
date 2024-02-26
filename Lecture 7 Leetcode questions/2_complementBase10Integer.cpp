
#include<iostream>
using namespace std;

int bitwiseComp(int n){
    int m=n;
    int mask = 0;

    while(n != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    return ans;
}

int main(){

    int n = 123;

    cout << bitwiseComp(n);

    return 0;
}