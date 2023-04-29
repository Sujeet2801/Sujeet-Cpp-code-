//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A

#include<iostream>
using namespace std;

int main(){

    int n = 5;
    //cin>>n;

    // Below loop to print upper traingle
    for(int i=1; i<=n; i++){

        //Below loop is to print spaces in each line
        for(int j=0; j<(n-i); j++){
            cout<<" ";
        }

        //Below loop is to print alphabet in each line
        for(int k=0; k<(2*i-1); k++){
            char ch = (char)('A'+ k);
            cout<<ch;
        }
        cout<<endl;
    }

    // Below loop to print lower traingle
    for(int i=n+1; i<=(2*n-1); i++){
        for(int j=0; j<(i-n); j++){     // to print spaces
            cout<<" ";
        }

            int no_of_alpha = 2*(2*n-i)-1;
        for(int k=0; k<no_of_alpha; k++){
            char ch = (char)('A' + k);  // to print alphabet
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}