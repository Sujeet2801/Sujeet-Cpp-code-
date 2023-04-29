//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){            // for rows

        for(int j=1; j<=(n-i); j++){    // for space
            cout<<"  ";
        }

        for(int k=1; k<=n; k++){        // for star 
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}