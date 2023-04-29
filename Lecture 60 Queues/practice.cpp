#include<iostream>
using namespace std;

class Queue{

    int *arr;
    int front;
    int rear;
    int size;

    public:

    Queue(int n){

        arr = new int[n];
        front = 0;
        rear = 0;
    }

    void enqueue(int data){

        if(size == rear){
            cout << "Queue is full" << endl;
        }

        else{
            arr[rear] = data;
            rear++;
        }

    }

    int dequeue(){

        if(front == rear){
            cout << "Queue is underflow" << endl;
        }

        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = rear = 0;
            }
            return ans;
        }

    }

    int Front(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};

int main(){

    //create a object
    Queue q1(7) ;

    q1.enqueue(56);
    q1.enqueue(12);
    q1.enqueue(25);

    cout << "Front is : " << q1.Front() << endl;

    return 0;
}