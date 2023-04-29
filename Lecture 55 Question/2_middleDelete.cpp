#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int size, int count){

    //base case
    if(count == (size/2))
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();
    count+=1;

    solve(s,size,count);

    s.push(num);
}

void deleteMiddle(stack<int> &s, int N){

    solve(s,N,0);
}

int main(){

    stack <int> s;

    s.push(10);
    s.push(56);
    s.push(58);
    s.push(63);
    s.push(85);
    s.push(89);
    s.push(95);

    deleteMiddle(s, s.size());

    while (!s.empty()) {
        int p = s.top();
        s.pop();
        cout << p << " ";
    }
    return 0;
}