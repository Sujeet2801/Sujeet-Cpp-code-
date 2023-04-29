#include<iostream>
using namespace std;

char getMaxOccCharacter(string str)
{
    int arr[26] = {0};

    // this loop is used to store count the character
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // this loop is used to get maximum count
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ ans;
}

int main()
{
    string s;
    cout << "Enter the word--> ";
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;

    return 0;
}
