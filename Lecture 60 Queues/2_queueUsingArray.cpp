#include<iostream>
#include<queue>
using namespace std;

class Queue{

    int *arr;
    int size;
    int qfront;
    int qrear;

    public:

    Queue(){
        size = 10000;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }

    bool isEmpty(){

        if(qfront == qrear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data){

        if(qrear == size){
            cout << "Queue is full " << endl;
        }
        else{
            qrear++;
            arr[qrear] = data;
        }
    }

    int dequeue(){

        if(qfront == qrear){
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront== qrear){
                qfront = 0;
                qrear = 0;
            }
            return ans;
        }
    }

    int front(){

        if(qfront == qrear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

/*
    int rear(){
        if(qrear > size)
            return -1;

        else{
            return arr[qrear];
        }
    }
*/

};

int main(){

    //create a object
    Queue q1 ;

    q1.enqueue(56);
    q1.enqueue(12);
    q1.enqueue(25);

    cout << q1.front() << endl;

    return 0; 
}