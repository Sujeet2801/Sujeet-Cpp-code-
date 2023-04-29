#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // Destructor
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << " memory free for node with data " << val << endl;
    }
};

int getLength(Node *head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertAtHead(Node*& head, int d){

    if(head == NULL){
        Node* temp = new Node (d);
        head = temp;
       // tail = temp;
    }

    else{
        // create a new node
        Node* temp = new Node(d);

        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node*& tail, Node*& head, int d){

    if(tail == NULL){
        Node* temp = new Node (d);
        head = temp;
        tail = temp;
    }

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void insertAtPosition(Node*& head, int position, int d){

    Node* temp = head;
    int cnt = 1;

    while(cnt < (position-1)){
        cnt++;
        temp = temp -> next;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    
}

Node* reverse(Node*& head){

    Node* curr = head;
    if(curr == NULL || curr -> next == NULL){
        return head;
    }
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    head = curr;
    curr -> next = curr -> prev;
    // curr -> prev = NULL;
    // curr = curr -> next;
    while(curr != NULL){
        Node* temp = curr -> prev;
        curr -> next = curr -> prev;
        curr -> prev = temp;
        curr = curr -> next;
    }
    // curr -> prev = curr -> next;
    // curr -> next = NULL;
    return head;
}

void deleteNode(int position, Node*& head){

    // deleting first node or start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;     
        // memory free   
        delete temp;
    }

    else
    {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;

    delete curr;

    }
}

void print(Node* head){

    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp-> data << " ";
        temp = temp -> next;
    }    
    cout << endl;

}

int main(){

    Node *node1 = new Node(14);
    Node *head = node1;
    Node * tail = node1;

   //cout << getLength(head) << endl;

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 20);
    print(head);

    cout << "tail: "<< tail -> data << endl;
    insertAtHead(head, 23);

    insertAtTail(tail, head, 56);
    cout << "head: "<< head -> data << endl;
    cout << "tail: "<< tail -> data << endl;
    print(head);
    
    insertAtPosition(head, 1, 40);
    print(head);
    cout << "head: "<< head -> data << endl;
    cout << "tail: "<< tail -> data << endl;

    Node* rev = reverse(head);
    print(rev);

    return 0;
}