
/* Write a function that returns the largest and the smallest number out of 3 given numbers. 
The main function should call this function to get the largest and smallest number and print 
the output.
*/

/*
#include<iostream>
using namespace std;

int largestSmallest(int a, int b, int c, int *largest)
{
    *largest = max(a, max(b,c));
    return min(a, min(b,c));
}

int main()
{

    int a, b, c, largest;
    cout << "Enter the number --> ";
    cin >> a >> b >> c; 
    int smallest = largestSmallest(a, b, c, &largest);
    cout << "Largest Number is --> " << largest  << endl;
    cout << "Smallest Number is --> " << smallest << endl;

    return 0;
}

*/




// First and last ocuurance of string

/*
#include <bits/stdc++.h>
using namespace std;
 
int fun(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (auto &ch : s)
        if (ch == 't')
            cnt++;
    return cnt;
}
 
int main()
{
    string s;
    cout << "Enter the string --> ";
    cin >> s;
    char first, last;

    int count = fun(s, &first, &last);
    cout << first << ' ' << last << ' ' << count;
    return 0;
}

*/


// function to return the first position and last position of the character ‘a’ in a string

/*
#include <bits/stdc++.h>
using namespace std;
 
void findFirstAndLastOccurrence(string s, int *first, int *last)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' && *first == -1)
            *first = i;
        if (s[i] == 'a')
            *last = i;
    }
}
 
int main()
{
    string s = "abaca";
    int first = -1, last = -1;
    findFirstAndLastOccurrence(s, &first, &last);
    cout << first << ' ' << last;

    return 0;
}
*/


// To print the address of array

/*
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[3] = {1, 2, 3};
    int(*ptr)[3] = &arr;
    cout << *arr << endl;
    cout << ptr << ' ' << (*ptr);
 
    return 0;
}
*/
    




