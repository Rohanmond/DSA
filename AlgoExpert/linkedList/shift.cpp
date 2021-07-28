#include<bits/stdc++.h>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};
void insertAtFront(LinkedList* &head,int d){
    if(head==nullptr) {
        head=new LinkedList(d);
        return;
    }
    LinkedList* temp=new LinkedList(d);
    temp->next=head;
    head=temp;
}
void print(LinkedList* head){
    while(head!=nullptr){
        cout<<head->value<<" ";
        head=head->next;
    }
    cout<<endl;
}

LinkedList *shiftLinkedList(LinkedList *head, int k) {
  // Write your code here.
  	LinkedList* temp=head;
		if(head==nullptr) return head;
		int count=0;
		while(temp!=nullptr){
			count++;
			temp=temp->next;
		}
	k=k%count;
	if(k==0 || k==count) return head;
	LinkedList* s=head;
	LinkedList* f=head;
	while(k--){
		f=f->next;
	}
	
	while(f->next!=nullptr){
		s=s->next;
		f=f->next;
	}
	LinkedList* temp2=s->next;
	s->next=nullptr;
	f->next=head;
	head=temp2;
	return head;
}
int main(){
    LinkedList* a=nullptr;
    insertAtFront(a,5);
    insertAtFront(a,4);
    insertAtFront(a,3);
    insertAtFront(a,2);
    insertAtFront(a,1);
    insertAtFront(a,0);
    print(a);

    int k=0;
    LinkedList* newh=shiftLinkedList(a,k);
    print(newh);
    return 0;
}
