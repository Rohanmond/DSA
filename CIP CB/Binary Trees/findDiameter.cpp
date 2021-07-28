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
int findHeight(Node* root){
    if(root==nullptr) return 0;
    int left=findHeight(root->left);
    int right=findHeight(root->right);
    return max(left,right)+1;
}
int findDiameter(Node* root){
    if(root==nullptr) return 0;
    int case1=findHeight(root->left)+findHeight(root->right);
    // cout<<"case1:"<<case1<<endl;
    int case2=findDiameter(root->left);
    // cout<<"case2:"<<case2<<endl;
    
    int case3=findDiameter(root->right);
    // cout<<"case3:"<<case3<<endl;
    
    return max(case1,max(case2,case3));
}
int main(){
    Node* root=create();
    printIn(root);
    cout<<endl;
    cout<<findDiameter(root)<<endl;
    return 0;
}