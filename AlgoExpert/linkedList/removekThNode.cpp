#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int n){
        value=n;
        next=nullptr;
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
        cout<<head->value<<" ";
        head=head->next;
    }
    cout<<endl;
}
void removeKthNode(Node* head,int k){
     Node* s=head;
	Node* f=head;
	while(f!=nullptr && k){
		f=f->next;
		k--;
	}
    if(f==nullptr && k==0){
        Node* temp=s;
        s=s->next;
        
    } 
	while(f->next!=nullptr){
		f=f->next;
		s=s->next;
	}
	Node* temp=s->next;
	s->next=s->next->next;
	delete temp;
}
int main(){
    Node* head=nullptr;
    insertAtFront(head,9);
    insertAtFront(head,8);
    insertAtFront(head,7);
    insertAtFront(head,6);
    insertAtFront(head,5);
    insertAtFront(head,4);
    insertAtFront(head,3);
    insertAtFront(head,2);
    insertAtFront(head,1);
    insertAtFront(head,0);
    
    removeKthNode(head,10);
    print(head);
    return 0;
    

}