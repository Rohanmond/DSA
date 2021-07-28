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
void insertAtFront(Node* &head,int d){
    if(head==NULL) {
        head=new Node(d);
        return;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtMiddle(Node* &head,int d,int p){
    if(p==0 || head==NULL){
        insertAtFront(head,d);
        return;
    }
    Node* temp=head;
    p--;
    while(temp->next!=NULL && p--) temp=temp->next;
    Node* item=new Node(d);
    item->next=temp->next;
    temp->next=item;
}
void deleteHead(Node* &head){
    if(head==NULL) return;
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reverse(Node* &head){
    Node* temp=head;
    Node* prev=NULL;
    while (temp!=NULL)
    {
        Node* n=temp->next;
        Node* curr=temp;
        curr->next=prev;
        prev=curr;
        temp=n;
    }
    head=prev;
}
Node* recReverse(Node* head){
    if(head->next==NULL or head==NULL) return head;
    Node* shead=recReverse(head->next);
    Node* temp=head->next;
    head->next=NULL;
    temp->next=head;
    return shead;
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
Node* kthNodeFromEnd(Node* head,int k){
    if(head==NULL) return head;
    Node* temp=head;
    Node* temp2=head;
    while(temp!=NULL && k){
        temp=temp->next;
        k--;
    }
    while(temp!=NULL){
        temp=temp->next;
        temp2=temp2->next;
    }
    return temp2;
}
int main(){
    Node* head=NULL;
    insertAtFront(head,5);
    insertAtFront(head,2);
    insertAtFront(head,3);
    insertAtFront(head,4);
    insertAtFront(head,7);
    insertAtFront(head,5);
    insertAtFront(head,3);
    insertAtMiddle(head,6,7);
    deleteHead(head);
    print(head);
    reverse(head);
    print(head);
    //Node *copy=head;
   //Node* temp=recReverse(copy);
    //print(temp);
    cout<<"---------------------"<<endl;
    Node* mid=midpoint(head);
    print(head);
    cout<<"The mid point is "<<mid->d<<endl;
    deleteHead(head);
    print(head);
    Node* mid2=midpoint(head);
    cout<<"The mid point 2 is:"<<mid2->d<<endl;
    cout<<"------------kth node from end-----------------"<<endl;
    Node* kthNodFromEnd=kthNodeFromEnd(head,3);
    print(head);
    cout<<"The kth node form end is "<<kthNodFromEnd->d<<endl;

    return 0;
}