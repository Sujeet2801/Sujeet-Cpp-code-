#include<iostream>
using namespace std;

void print(int n)
{
    // Base Condition
    if(n == 0)
        return;

    cout << n << endl;  // tail recursion

    //recursive call
    print(n-1); 

    cout << n << endl;  // head recursion

}

int main()
{
    int n;
    cout << "Enter the number --> ";
    cin >> n;
    print(n);

    return 0;
}