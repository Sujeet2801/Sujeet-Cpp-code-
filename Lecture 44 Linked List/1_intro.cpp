#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    // Constructor //
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    } 

    // Destructor
    ~Node(){
        int value = this -> data;

        if(this-> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node *&head, int d){

    // Create a new node //
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node *& tail, int d){

    // Create a new node //
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail ,Node *&head, int position, int d){

    // insert at 1st position //
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    // Create a new node //
    Node* temp = head;
    int cnt = 1;

    while(cnt < (position - 1)){
        temp = temp -> next;
        cnt++;
    }

    // inserting at last Position //
    if(temp -> next == NULL){
        insertAtTail(tail ,d);
        return;
    }

    Node * nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

Node* deleteNode(Node* head, int position){

    // Delete first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;

        temp -> next = NULL;
        delete temp;
    }

    // Delete middle or last node
    Node* prev = NULL;
    Node* curr = head;
    int count = 1;

    while(count < position){
        prev = curr;
        curr = curr -> next;
        count ++;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

    return head;
}

void print (Node *&head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int main()
{

    // Dynamic allocated object //
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;

    // head pointed to node1 //
    Node * head = node1;
    Node * tail = node1;

    insertAtHead(head, 12);
    //print(head);

    
    insertAtTail(tail, 15);
    // print(head);

    insertAtPosition(tail , head, 1, 33);
    print(head);

    Node* temp = deleteNode(head, 4);
    print(temp);


    return 0;
}