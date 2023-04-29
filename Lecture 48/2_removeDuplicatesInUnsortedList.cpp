#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){

        this -> data = d;
        this -> next = next;

    }

};

void insertAtHead(Node* & head, int d){

    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;

}

void print(Node*& head){

    Node* temp = head;
    int count = 1;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* reverseUnsortedLL(Node* head){

    Node* curr = head;

    while(curr != NULL){
        Node* temp = curr -> next;

        while(temp != NULL){
            
        }
    }

}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 12);

    return 0;
}