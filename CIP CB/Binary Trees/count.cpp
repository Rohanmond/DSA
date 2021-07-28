#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        left=nullptr;
        right=nullptr;
    }
};
Node* create(){
    int d;
    cin>>d;
    if(d==-1) return nullptr;
    Node* root=new Node(d);
    root->left=create();
    root->right=create();
    return root;
}
void printIn(Node* root){
    if(root==nullptr) return;
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}
int countNodes(Node* root){
    queue<Node*> q;
    if(root==nullptr) return 0;
    q.push(root);
    int count=0;
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        count++;
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right); 
    }
    return count;
}
int totalSum(Node* root){
    queue<Node*> q;
    if(root==nullptr) return 0;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        sum+=curr->data;
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right); 
    }
    return sum;
}

int main(){
    Node* root=create();
    printIn(root);
    cout<<endl;
    cout<<"Total Nodes:"<<countNodes(root)<<endl;
    cout<<"Total sum:"<<totalSum(root)<<endl;
    return 0;
}