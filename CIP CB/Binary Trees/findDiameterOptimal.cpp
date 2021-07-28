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

pair<int,int> findDOptimal(Node* root){
   pair<int,int> p;
   if(root==nullptr){
       return {0,0};
   }
   pair<int,int> left=findDOptimal(root->left);
   pair<int,int> right=findDOptimal(root->right);
   int height=max(left.first,right.first)+1;
   int diam=max(left.first+right.first,max(left.second,right.second));
   return {height,diam};
}
int main(){
    Node* root=create();
    pair<int,int> res=findDOptimal(root);
    cout<<res.second<<endl;
    return 0;
}