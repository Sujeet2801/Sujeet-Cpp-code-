// C++ program to find the prime numbers
// between a given interval

										// Method 1
/*#include <bits/stdc++.h>
using namespace std;

// Function for print prime
// number in given range
void primeInRange(int L, int R)
{
	int flag;

	// Traverse each number in the
	// interval with the help of for loop
	for (int i = L; i <= R; i++) {

		// Skip 0 and 1 as they are
		// neither prime nor composite
		if (i == 1 || i == 0)
			continue;

		// flag variable to tell
		// if i is prime or not
		flag = 1;

		// Iterate to check if i is prime
		// or not
		for (int j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		// flag = 1 means i is prime
		// and flag = 0 means i is not prime
		if (flag == 1)
			cout << i << " ";
	}
}

// Driver Code
int main()
{
	// Given Range
	int L ,R;
	cin>>L>>R;

	// Function Call
	primeInRange(L, R);

	return 0;
}
*/

										// Method 2

/*#include<iostream>
using namespace std;

bool isPrime(int num){
	for(int i=2; i<(num-1); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){

    int a=2, b=11;
	for(int i=a; i<=b; i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}

    return 0;
}*/

										// Method 3


#include<iostream>
using namespace std;

bool isPrime(int num){
	for(int i=2; i*i <= num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){

    int a=2, b=11;
	for(int i=a; i<=b; i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}

    return 0;
}
