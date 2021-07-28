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
void printLUtil(Node* root,int currL,int reqLevel,int maxLevel){
    if(root==nullptr) {currL--;return;}
    if(currL==reqLevel) cout<<root->data<<" ";
    printLUtil(root->left,currL+1,reqLevel,maxLevel);
    printLUtil(root->right,currL+1,reqLevel,maxLevel);
}
void printLevelOrder(Node* root){
    int maxH=findHeight(root);
    if(root==nullptr) return;
   
    for(int i=1;i<=maxH;i++){
        printLUtil(root,1,i,maxH);
        cout<<endl;
    }


}
int main(){
    Node* root=create();
    printIn(root);
    int maxH=findHeight(root);
    cout<<"Height:"<<maxH<<endl;
    printLevelOrder(root);
    return 0;
}