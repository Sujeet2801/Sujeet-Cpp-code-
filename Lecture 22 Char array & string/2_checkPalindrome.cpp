/*#include<iostream>
#include<vector>

using namespace std;

char toLowercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s<=e)
    {
        if(toLowercase(a[s]) != toLowercase(a[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int getLength(char name[])
{
    int count = 0;

    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{   

    char name[10];
    cout << "Enter the name--> ";
    cin >> name;

    cout << "Your name is--> " << name << endl;

    int len = getLength(name);
    cout << "Length--> " << len << endl;

    cout << "Palindrome or Not--> " << checkPalindrome(name, len) << endl;

    cout << "Character is --> " << toLowercase('a') << endl;
    cout << "Character is --> " << toLowercase('B') << endl;
    

    return 0;
}*/









#include <bits/stdc++.h> 
using namespace std;

bool isAlphaNum(char c)
{
    if( (48<=c && c<=57) || (65<=c && c<=90) || (97<=c && c<=122)) 
        return true;
    return false;
}
    
char lowerCase(char c)
{
    if(65<=c && c<=90)
        return c+32;
    else 
        return c;
}
    
bool checkPalindrome(string s) 
{
    string input;
    for(char c:s)
    {
        if(isAlphaNum(c))
            input += lowerCase(c);
    }
    string reversed=input;
    reverse(reversed.begin(),reversed.end());
    if(input==reversed) return true;
    else return false;
}


int main()
{   

    string name;
    cout << "Enter the name--> ";
    cin >> name;

    cout << "Your name is--> " << name << endl;

    cout << "Palindrome or Not--> " << checkPalindrome(name) << endl;

    return 0;
}