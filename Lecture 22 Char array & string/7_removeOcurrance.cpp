#include<bits/stdc++.h>
using namespace std;

string removeOccurance(string s, string part)
{
    while((s.length() != 0) && (s.find(part) < s.length()))
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}


int main()
{
    string s, part;
    cout << "Enter the string --> ";
    cin >> s;

    cout << "Enter the part --> ";
    cin >> part;

    cout << removeOccurance(s,part) ;

    return 0;
}