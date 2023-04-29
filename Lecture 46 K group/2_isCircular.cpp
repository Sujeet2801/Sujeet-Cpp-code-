#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //Constructor
    Node(int d){

        this -> data = d;
        this -> next = next;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL);{
            delete next;
            next = NULL;
        }
        cout << "memory is free for node value " << value << endl;

    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){

        Node *newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;

    }
    else{
        //non empty list
        // assuming that the element is present in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        //element found -> curr is 
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}

bool isCircular(Node* &head){

    //empty list
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    
    // if(temp == NULL){
    //     return false;
    // }

    if(temp == head){
        return true;
    }
    return false;
}

void print(Node* tail){

    Node* temp = tail;

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;

}

int main(){

    Node* tail = NULL;

    insertNode(tail, 3, 3);
    //print(tail);

    insertNode(tail, 3, 7);
    //print(tail);

    insertNode(tail, 7, 39);
    print(tail);

    if(isCircular(tail)){
        cout << "Linked List is circular in nature";
    }

    else{
        cout << "Linked List is not circulr in nature";
    }
    return 0;
}