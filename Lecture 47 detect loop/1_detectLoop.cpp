#include<iostream>
#include<map>
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

// traverse a ll
void print(Node*& head){

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Aproach 1
bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map <Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        // cycle is present
        if(visited[temp] == true){
            cout << "Present on element " << temp -> data << endl;
            return true ;
        }
        visited[temp] = true ;
        temp = temp -> next;
    }
    return false;
}

// Aproach 2
Node* floydDetectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast){
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }
    return NULL;
}

// starting node
Node* getStarting(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

// remove loop
void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node*startOfLoop = getStarting(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;

}

int main(){

    Node *node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 13);
    //print(head);

    insertAtHead(head, 25);
    //print(head);

    insertAtHead(head, 26);
    //print(head);

    insertAtHead(head, 35);
    print(head);

    tail -> next = head -> next -> next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    /*
    if(detectLoop(head)){
        cout << "cycle is detected " << endl;
    }

    else{
        cout << "no cycle" << endl;
    }
    */

   if(floydDetectLoop(head )!= NULL){
        cout << "cycle is detected " << endl;
    }

    else{
        cout << "no cycle" << endl;
    }

    Node* temp = getStarting(head);

    cout << "loop starts at " << temp -> data << endl;

    removeLoop(head);
    print(head);

    return 0;
}