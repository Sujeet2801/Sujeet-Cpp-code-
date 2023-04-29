#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string replaceSpace(string str)
{   
    string temp = "";
    cout<< str.length()<<endl;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}



int main()
{
    string s;
    cout << "Enter the word--> ";
    cin >> s;

    cout << replaceSpace(s) << endl;

    return 0;
}