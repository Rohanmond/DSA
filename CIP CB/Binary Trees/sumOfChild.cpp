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
int sumOfChild(Node* root){
    if(root==nullptr) return 0;

    int left=sumOfChild(root->left);
    int right=sumOfChild(root->right);
    if(left==0 && right==0) return root->data;
    int temp=root->data;
    root->data=left+right;
    return root->data+temp;
}
int main(){
    Node* root=create();
    printIn(root);
    cout<<endl;
    int res=sumOfChild(root);
    printIn(root);
    cout<<endl;
    return 0;
}