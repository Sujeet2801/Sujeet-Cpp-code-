#include<iostream>
using namespace std;

void saycount(int n, string arr[])
{
    // Base condition
    if(n == 0)
        return;

    int digit = n % 10;
    n = n/10;

    // Recursive relation
    saycount(n,arr);

    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cout << "Enter the number --> ";
    cin >> n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five",
                     "Six", "Seven", "Eight", "Nine"};
    saycount(n,arr);
    cout << endl;

    return 0;
}