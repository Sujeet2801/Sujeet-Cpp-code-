#include<iostream>
using namespace std;

void reverse(string &st, int start, int end)
{
    cout << "Call recived for " << st << endl;
    // Base Condition
    if(start > end)
        return ;

    swap(st[start], st[end]);
    start++;
    end--;

    // Recursive relation
    reverse(st, start, end);
}


// Optimise code using single pointer
void reverseString(string &s, int i)
{
    cout << "Call recived for " << s << endl;

    int n = s.length()-1;

    // Base Condition
    if(i > (n/2))
        return ;

    swap(s[i], s[n-i]);
    i++;

    // Recursive relation
    reverseString(s,i);
}

int main()
{

    string name = "sujeet";
    cout << endl << "Given string is --> " << name << endl;
    int start = 0;
    int end = name.length()-1;
    reverseString(name, start);
    cout << "Reverse string is --> " << name << endl << endl;

    return 0;
}