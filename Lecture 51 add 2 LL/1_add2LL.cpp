#include<iostream>
using namespace std;

class Node {
    private:

    void reverse(Node* head){

        Node* curr = head;
        Node* prev = NULL;
        Node* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    void insertAtTail(Node*& head, Node*& tail, int d){
        // empty list
        Node* temp = new Node(d);
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }

        // non empty list
        tail -> next = temp;
        tail = temp;
    }

    struct Node* add(struct Node*& first, struct Node*& second){

        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;

        while(first != NULL || second != NULL || carry != 0){

            int val1 = 0;
            if(first != NULL){
                va1 = first -> data;
            }

            int val2 = 0;
            if(second != NULL){
                val2 = second -> data;
            }

            int sum = carry + val1 + val2;

            int digit = sum % 10;

            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;

            if(first != NULL){
                first = first -> next;
            }

            if(second != NULL){
                second = second -> next;
            }
        }
        return ansHead;
    }

    public:

    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    struct Node* addTwoLists(struct Node* first, struct Node* second){

    // step 1-> reverse a LL
    first = reverse(first);
    second = reverse(second);

    // step 2-> add 2 lists
    Node* ans = add(first, second);

    // step 3-> reverse again
    ans = reverse(ans);

    return ans;

    }

};

void print(Node* head) {

    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(10);



    return 0;
}