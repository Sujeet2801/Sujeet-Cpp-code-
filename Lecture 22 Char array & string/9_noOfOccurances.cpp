// First and last ocuurance of string


//#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;


// Approach 1 
int noOfOccurances_1(string s, char character)
{
    int count = 0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] == character)
            count++;
    } 
    return count;
}
 
// Approach 2
int noOfOccurances_2(string s, char character)
{
    int count = 0;
    for (auto &ch : s)
        if (ch == character)
            count++;
    return count;
}

// Approach 3
int noOfOccurances_3(string s, char character)
{
    return count(s.begin(), s.end(), character);
}

 
int main()
{
    string s;
    cout << "Enter the string --> ";
    cin >> s;

    char character ;
    cout << "Enter the character --> ";
    cin >> character;   

    int occurances = noOfOccurances_3(s,character);
    cout << occurances << " occurances" << endl;
    return 0;
}