#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int d;
    Node* next;
    Node(int d){
        this->d=d;
        this->next=NULL;
    }
};
Node* merge(Node* a,Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    Node* c;
    if(a->d < b->d){
        c=a;
        c->next=merge(a->next,b);
    }else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
void insertAtFront(Node* &head,int d){
    if(head==NULL) {
        head=new Node(d);
        return;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* a=NULL;
    insertAtFront(a,7);
    insertAtFront(a,4);
    insertAtFront(a,3);
    insertAtFront(a,1);
    Node* b=NULL;
    insertAtFront(b,10);
    insertAtFront(b,8);
    insertAtFront(b,2);
    insertAtFront(b,0);
    Node* res=merge(a,b);
    print(res);
    return 0;
}