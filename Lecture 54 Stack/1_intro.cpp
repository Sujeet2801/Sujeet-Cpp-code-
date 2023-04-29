#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //properties
    public:
        int *arr;
        int top;
        int size;

    // behacviour

    Stack(int size){

        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){

        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){

        if(top >= 0){
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){

        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    //create a stack
    Stack st(5);

    //push operation
    st.push(31);
    st.push(67);
    st.push(43);
    st.push(36);

    //cout << endl << st.peek() << endl;

    //pop operation
    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    /*
    // create a stack
    stack<int> s;

    // push operation
    s.push(3);
    s.push(1);
    s.push(7);

    // pop operation
    s.pop();
    s.pop();


    cout << endl <<"Printing top element : " << s.top()<<endl;
    cout << "Size of stack : " << s.size()<< endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl << endl;
    }
    */

    return 0;
}