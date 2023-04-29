#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

void insertAtTail(Node*& tail, Node* &curr){

    //Node* temp = new Node(d);

    tail -> next = curr;
    tail = curr;

}

// Aproach 1
Node* sortList(Node*& head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){

        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp -> data == 1){
            oneCount++;
        }
        else if(temp -> data == 2){
            twoCount++;
        }
      temp = temp -> next;  
    }

    temp = head;

    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
    return head;
}

//Aproach 2 
Node* sortLinked(Node* &head){

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    // create a seprate list 0s, 1s, 2s
    while(curr != NULL){

        int value = curr -> data;

        if(value == 0){
            insertAtTail(zeroTail, curr);
        }

       else if(value == 1){
            insertAtTail(oneTail, curr);
        }

       else if(value == 2){
            insertAtTail(twoTail, curr);
        }

        curr = curr -> next;
    }

    // merge 3 sublist

    // 1s list non empty
    if(oneHead != NULL){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }

    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    //setup head
    head = zeroHead -> next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

void print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(0);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 2);
    //print(head);

    insertAtTail(tail, 0);
    //print(head);

    insertAtTail(tail, 1);
    //print(head);

    insertAtTail(tail, 2);
    print(head);

    // Node* node = sortList(head);
    // print(node);

    Node* node2 = sortLinked(head);
    print(head);

    return 0;
}