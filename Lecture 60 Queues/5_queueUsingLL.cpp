#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};

class queueUsingLL{
    public:

    node* front;
    node* back;

    queueUsingLL(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);

        //LL is empty
        if(front == NULL){
            front = back = n;
            return;
        }
        back-> next = n;
        back = n;
    }

    int pop(){
        if(front == NULL){
            cout << "Queue is underflow" << endl;
        }
        
        node* nodeToDelete =  front;
        front = front-> next;
        delete nodeToDelete;
    }

    int peek(){
        if(front == NULL){
            return -1;
        }
        return front-> data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){

    queueUsingLL q;
    q.push(8);
    q.push(25);
    q.push(38);
    q.push(85);
    q.push(69);
    q.push(63);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;


    return 0;
}