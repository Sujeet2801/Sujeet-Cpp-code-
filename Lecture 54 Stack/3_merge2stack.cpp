#include<iostream>
using namespace std;

class myStack{

    public:

    //Data members
    int *arr;
    int top1, top2;
    int size;

    myStack(int s){
        size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }

    void push1(int data){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = data;
        }
        else{
            cout << "Stack is Overflow" << endl;
        }
    }

    void push2(int data){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = data;
        }
        else{
            cout << "Stack is Overflow" << endl;
        }
    }

    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};


int main()
{
    myStack ts(10);
    ts.push1(5);
    ts.push1(25);
    ts.push1(98);
    ts.push1(100);
    ts.push2(10);
    ts.push2(15);
    ts.push1(96);
    ts.push2(7);
    cout << "Popped element from stack1 is "
         << ": " << ts.pop1() << endl;
    ts.push2(56);
    cout << "Popped element from stack2 is "
         << ": " << ts.pop2() << endl;
    return 0;
}

