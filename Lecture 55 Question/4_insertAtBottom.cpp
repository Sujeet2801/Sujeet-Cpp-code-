#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int N){

    //base case
    if(s.empty()){
        s.push(N);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s,N);

    s.push(num);
}

stack<int> atBottom(stack<int> &s, int x){
    insertAtBottom(s,x);
    return s;
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(49);
    s.push(18);

    atBottom(s,4);

    while(!s.empty()){
        int p = s.top();
        s.pop();
        cout << p << " ";
    }

    return 0;
}