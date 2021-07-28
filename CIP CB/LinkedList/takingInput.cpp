#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int d;
    Node* next;
    Node(int d){
        this->d=d;
        next=NULL;
    }
};
Node* takeInputFromFile(){
    Node* head=NULL;
    int d;
    while(cin>>d){
        if(head==NULL) head=new Node(d);
        else head->next=new Node(d);
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<(*head).d<<" ";
        head=head->next;
    }
}
int main(){
    Node* head=takeInputFromFile();
    print(head);
    return 0;
}
