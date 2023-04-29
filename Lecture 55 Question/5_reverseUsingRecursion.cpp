#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int > &s, int element){

    //base case
    if(s.empty()){
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s,element);

    s.push(num);

}

void reverseStack(stack<int> &s){

    //base case
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s,num);

}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(49);
    s.push(18);

    reverseStack(s);

    while(!s.empty()){
        int p = s.top();
        s.pop();
        cout << p << " ";
    }

    return 0;
}