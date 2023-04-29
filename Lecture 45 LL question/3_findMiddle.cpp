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

// Aproach 1
int getLength(Node *&head){

    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

Node* findMiddle(Node *&head){

    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;

    while(cnt < ans){
        temp = temp -> next;
    }
    return temp;

}

// Aproach 2
Node* getMiddle(Node *&head){

    if(head == NULL || head -> next == NULL){
        return head;
    }
    if(head -> next -> next == NULL){
        return head -> next;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL){

        fast = head -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
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

    Node* newhead =  getMiddle(head);
    cout << newhead -> data;
 
    return 0;
}