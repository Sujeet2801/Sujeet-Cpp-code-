#include<iostream>
using namespace std;

class node{
    
    public:
    int val;
    node* next;

};

class mystack{
    public:

    int stackSize;
    node* head;

    mystack(){
        stackSize = 0;
        head = NULL;
    }

    void push(int data){
        node* temp = new node();
        temp -> val = data;
        temp -> next = head;
        head = temp;

        cout << "Element " << data << " pushed into the stack" << endl;
        stackSize++;
    }

    void pop(){
        if(head == NULL){
            cout << "Stack is Overflow" << endl;
            return ;
        }

        node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;

        cout <<"Element is poped" << endl;
        stackSize--;
    }

    int top(){
        if(head == NULL){
            cout << "Stack is overflow" << endl;
        }

        cout << "Top element " << head -> val << endl;
        return head -> val;
    }

    int size(){
        cout << "Size of stack is " << stackSize << endl;
        return stackSize;
    }

    int empty(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return 1;
        }
        else{
            cout << "Stack is not empty" << endl;
            return 0;
        }
    }
};

int main(){

    mystack s1;

    s1.empty();

    s1.push(10);
    s1.push(38);
    s1.push(67);

    s1.size();

    s1.empty();

    return 0;
}