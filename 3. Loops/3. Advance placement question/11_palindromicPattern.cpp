//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){            // for rows

        for(int j=1; j<=(n-i); j++){    // for space
            cout<<"  ";
        }

        int start = 1;
        for(int k=i; k>=1; k--){
            cout<<k<<" ";
        }

        for(int k=2; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}