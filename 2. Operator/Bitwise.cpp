#include <iostream>
using namespace std;

int main()
{

    int num = 5; // 0101

    cout << (num << 1) << endl; // left shift ==> multiply by 2     // 10

    cout << (num >> 1) << endl; // right shift ==> divide by 2      // 2

    int num2 = 8; // 1000

    cout << (num & num2) << endl; // 0000 ==> 0
    cout << (num | num2) << endl; // 1101 ==> 13
    return 0;
}