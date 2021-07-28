#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int d;
    Node* left;
    Node* right;
    Node(int d){
        this->d=d;
        this->left=nullptr;
        this->right=nullptr;
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
void printPreorder(Node* root){
    if(root==nullptr) return;
    cout<<root->d<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
    return;
}
void printInorder(Node* root){
    if(root==nullptr) return;
    printInorder(root->left);
    cout<<root->d<<" ";
    printInorder(root->right);
}
void printPostorder(Node* root){
    if(root==nullptr) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->d<<" ";
}
int main(){
    Node* root=create();
    printPreorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostorder(root);
    cout<<endl;
    return 0;
}