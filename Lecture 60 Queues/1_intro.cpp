#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int> q;

    // push a element in a queue
    q.push(11);
    cout << "Front : " << q.front() <<" ";
    cout << " Rear : " << q.back() << endl;

    q.push(38);
    cout << "Front : " << q.front() << " ";
    cout << " Rear : " << q.back()  << endl;

    q.push(35);
    cout << "Front : " << q.front() << " ";
    cout << " Rear : " << q.back()  << endl;

    // Size of queue 
    cout << "Size of q is : " << q.size() << endl << endl;

    // pop a element from queue
    q.pop();
    cout << "Front : " << q.front() << " ";
    cout << " Rear : " << q.back()  << endl;
    cout << "Size of q is : " << q.size() << endl << endl;

    q.pop();
    cout << "Front : " << q.front() << " ";
    cout << " Rear : " << q.back()  << endl;
    cout << "Size of q is : " << q.size() << endl << endl;

    q.pop();
    cout << "Front : " << q.front() << " ";
    cout << " Rear : " << q.back()  << endl;
    cout << "Size of q is : " << q.size() << endl;

    return 0;
}