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

void print(Node*& head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data<< " ";
        temp = temp -> next;
    }
    cout << endl;

}

void reverse(Node*& head, Node* curr, Node* prev){

    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkesList(Node*& head){

    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;

}

int main(){

    Node *node1 = new Node(10);
    //cout << node1 -> data << endl;

    Node * head = node1;
    Node * tail = node1;
    // cout << "data is -> " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
    print(head);

    insertAtHead(head, 12);
    // cout << "data is -> " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
    //print(head);

    insertAtHead(head, 20);
    // cout << "data is -> " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
    print(head);

    insertAtHead(head, 25);
    // cout << "data is -> " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
    print(head);


    Node *newhead =  reverseLinkesList(head);
    print(newhead);
    /*
    Node *neww = reverse1(head);
    print(neww);
    */
    return 0;
}