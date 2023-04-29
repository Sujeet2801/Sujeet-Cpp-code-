#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){

        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node *&head, int d){

    // create a new node
    Node *temp = new Node(d);

    temp -> next = head;
    head = temp;

}

// Aproach 1 using loop
Node* reverseLinkedList(Node *&head){

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Approach 2 using recursion
void reverse(Node*& head, Node* curr, Node* prev){

    //base case
    if(curr == NULL){
        head;
        return;
    }

    Node* forward = curr -> next;
    curr-> next = prev;
    reverse(head, forward, curr);

}

Node* reverseLinked(Node*& head){

    Node* curr = head;
    Node* prev = NULL;
    reverse (head, curr, prev);
    return head;

}

// Aproach 3
Node* reverse1(Node* head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* smallHead = reverse1(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return smallHead;

}

void print(Node*& head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data<< " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node *node1 = NULL;
    //cout << node1 -> data << endl;

    Node * head = node1;
    Node * tail = node1;
    // cout << "head -> " << head -> data << endl;
    // cout << "tail -> " << tail -> data << endl;
    print(head);

    // insertAtHead(head, 12);
    // cout << "head -> " << head -> data << endl;
    // cout << "tail -> " << tail -> data << endl;

    //insertAtHead(head, 20);
    // cout << "head -> " << head -> data << endl;
    // cout << "tail -> " << tail -> data << endl;
    //print(head);

    //insertAtHead(head, 25);
   // print(head);
    // cout << "head -> " << head -> data << endl;
    // cout << "tail -> " << tail -> data << endl;

    cout << "reversed LL --> " << endl;
    Node *newhead = reverseLinked(head);
    print(newhead);

    // Node *neww = reverse1(head);
    // print(neww);

    return 0;
}