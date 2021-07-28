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
Node* midpoint(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    Node* temp2=head;
    while(temp2->next!=NULL && temp2->next->next!=NULL){
        temp2=temp2->next->next;
        temp=temp->next;
    }
    return temp;
}
Node* mergeSort(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* midP=midpoint(head);
    Node* a=head;
    Node* b=midP->next;
    midP->next=NULL;
    a=mergeSort(a);
    b=mergeSort(b);
    Node* c=merge(a,b);
    return c;
}
int main(){
    Node* head=NULL;
    insertAtFront(head,3);
    insertAtFront(head,12);
    insertAtFront(head,11);
    insertAtFront(head,9);
    insertAtFront(head,8);
    insertAtFront(head,15);
    insertAtFront(head,4);
    insertAtFront(head,2);
    insertAtFront(head,1);
    insertAtFront(head,3);
    Node* res=mergeSort(head);
    print(res);
    return 0;
}