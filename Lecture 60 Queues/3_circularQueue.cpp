/*
#include<queue>
#include<iostream>
using namespace std;

class circularQueue{

    int *arr;
    int front;
    int rear;
    int size;

    public:

    //constructor
    circularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    //push a element in queue
    void enqueue(int value){

        //queue is full
        if((front == 0 && rear == size - 1) || (rear == (front-1)%(size-1))){
            cout << "Queue is full " << endl;
            return ;
        }

        //no element is present
        else if(front == -1){
            cout << "first element" << endl;
            front = 0;
            rear = 0;
            arr[rear] = value;
        }         

        //when front is not first element
        else if(rear == size -1 && front != 0){
            rear = 0;
            arr[rear] = value;
        }

        //some element is present in queue
        else{
            rear++;
            arr[rear] = value ;
        }
       // return true;
    }

    int dequeue(){

        //queue is empty
        if(front == -1){
            cout << "Queue is underflow"<< endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        // one element is present in the queue
        if(front == rear){
            front = -1;
            rear = -1;
        }

        //to maintain cyclic nature
        else if(front == size-1){
            front = 0;
        }

        else {
            front ++;
        }
        return ans;
    }

    int qfront(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main(){

    circularQueue c1(2);

    c1.enqueue(5);
    cout << c1.qfront() << endl;
    //c1.enqueue(25);

    return 0;
}*/

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    void enqueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            //cout << "Queue is full" << endl;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};

int main(){

    CircularQueue c1(5);

    c1.enqueue(5);
    //cout << c1.qfront() << endl;
    //c1.enqueue(25);

    return 0;
}