#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
void printInorder(Node* root){
    if(root==nullptr) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
Node* create(){
    int d;
    cin>>d;
    if(d==-1) return nullptr;
    Node* root=new Node(d);
    root->left=create();
    root->right=create();
    return root;
}
void printBFS(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
        cout<<curr->data<<" ";
    }
}
void printBFSWithSpaces(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* curr=q.front();
        if(curr==nullptr){
            cout<<endl;
            q.pop();
            if(!q.empty()) q.push(nullptr);
            continue;
        }
        q.pop();
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
        cout<<curr->data<<" ";
    }
}
int main(){
    Node* root=create();
    printInorder(root);
    cout<<endl;
    printBFSWithSpaces(root);
    cout<<endl;
    return 0;
}