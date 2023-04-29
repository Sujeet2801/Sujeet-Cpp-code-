// Count the number of digits in the given number n.

#include <iostream>
using namespace std;

int main()
{

    int n, count;
    cout << "Enter the number:-" << endl;
    cin >> n;

    for (count = 0; n > 0; count++)
    {
        n /= 10;
        
    }
    cout << count << endl;
    return 0;
}
