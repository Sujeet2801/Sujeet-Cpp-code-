#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

// Create a node
class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

//build tree
node* buildTree(node* root){

    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left " << data << endl;
    root -> left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root -> right = buildTree(root -> right);
}

//Print tree using level order traversal
void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";

            if(temp -> left){
                q.push(temp->left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }

}

//Print tree in reverse
void reverseLevelOrder(node* root){

    //Create a vector
    vector<int> ans;

    //if root is null
    if(root == NULL){
        return;
    }

    //Create a queue ans push root
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* t = q.front();
        ans.push_back(t-> data);

        if(t-> right){
            q.push(t-> right);
        }

        if(t-> left){
            q.push(t->left);
        }
        q.pop();
    }

    //Reverse the vector
    reverse(ans.begin(), ans.end());

    //print the elements of vector
    for(int i=0; i<ans.size(); i++){
        cout << ans[i]<< " ";
    }
}

//Create a tree using level order
void buildFromLevelOrder(node* &root){

    queue<node*> q;
    cout << "Enter data "<< endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node for " << temp -> data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }

    }
}


int main(){

    node* root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    cout<< endl;
    reverseLevelOrder(root);

    /*
    //creating a tree
    root = buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);
    */
    return 0;
}