#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string input){

    stack<char> s;

    for(int i=0; i<input.length(); i++){

        char ch = input[i];

        if(ch == '(' || ch == '{' || ch == '[' ){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top = s.top();

                if((ch == ')' && top == '(') || 
                (ch == '}' && top == '{') || 
                (ch == ']' && top == '[')){
                    s.pop();
                }

                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

    }

    if(s.empty())
        return true;
    else
        return false;

}

int main(){

    string st = "()";
    cout << validParenthesis(st);

    return 0;
}

