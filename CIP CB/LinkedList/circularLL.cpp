#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int d;
    Node* next;
    Node(int n){
        d=n;
        next=nullptr;
    }
};
void insert(Node* &head,int d){
    Node* n=new Node(d);
    Node* temp=head;
    if(temp==nullptr){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    head=n;
    temp->next=head;
}
void print(Node* head){
    Node* temp=head->next;
    cout<<head->d<<" ";
    while(temp!=head){
        cout<<temp->d<<" ";
        temp=temp->next;
    }

    cout<<endl;
}
int main(){
    Node* head=nullptr;
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    print(head);
    return 0;
}
