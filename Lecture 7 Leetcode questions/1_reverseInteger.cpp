
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Original Integer: " << n << endl;

    int ans = 0;
    while(n != 0){

        int digit = n % 10;
        if(ans > INT16_MAX/10 || ans <INT16_MIN){
            return 0;
        }
        ans = ans * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed Integer: " << ans << endl;

    return 0;
}