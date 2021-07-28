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
void print(Node* head){
    while(head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* sumOfTheLists(Node*a,Node*b,int carry){
    if(a==nullptr && b==nullptr) return nullptr;
    if(a==nullptr && b!=nullptr) return b;
    if(a!=nullptr && b==nullptr) return a;
    if(a->d==0 && b->d==0 && carry==0) return nullptr;
    int value=(a->d+b->d+carry)%10;
    carry=(a->d+b->d+carry)/10;
    Node* c=new Node(value);
    if(a->next==nullptr) a->next=new Node(0);
    if(b->next==nullptr) b->next=new Node(0);
    c->next=sumOfTheLists(a->next,b->next,carry);
    return c;
}
int main(){
    Node* a=nullptr;
    insertAtFront(a,1);
    insertAtFront(a,7);
    insertAtFront(a,4);
    insertAtFront(a,2);
    print(a);
    Node* b=nullptr;
    insertAtFront(b,5);
    insertAtFront(b,4);
    insertAtFront(b,9);
    print(b);
    Node* res=sumOfTheLists(a,b,0);
    print(res);
    return 0;


}