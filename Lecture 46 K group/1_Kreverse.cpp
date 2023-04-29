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

// insert at head
void insertAtHead(Node *&head, int d){

    //create a new node
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

// reverse a LL
Node* reverse(Node *&head, int k){

    //base case
    if(head == NULL){
        return NULL;
    }

    //step 1 reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;

    while(curr != NULL && count < k){

        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count ++;
    }

    // step2 recursion
    if(forward != NULL){
        head -> next = reverse(forward,k);
    }

    // step 3 return head of reversed list
    return prev;
}

//traerse a node
void print(Node*& head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 13);
    //print(head);

    insertAtHead(head, 25);
    //print(head);

    insertAtHead(head, 26);
    //print(head);

    insertAtHead(head, 35);
    print(head);

    Node* newhead = reverse(head,2);
    print(newhead);

    return 0;
}