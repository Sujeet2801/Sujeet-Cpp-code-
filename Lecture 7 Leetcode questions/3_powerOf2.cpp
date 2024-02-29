
// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return 0;
        
	while (n != 1) {
		if (n % 2 != 0)
			return 0;
		n = n / 2;
	}
	return 1;
}

// Driver code
int main()
{
	// Function call
	isPowerOfTwo(31) ? cout << "Yes\n" : cout << "No\n";
	isPowerOfTwo(64) ? cout << "Yes\n" : cout << "No\n";
	return 0;
}

