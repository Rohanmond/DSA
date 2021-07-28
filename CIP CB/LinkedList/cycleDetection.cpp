#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data=d;
        next=nullptr;
    }
};
void insertAtFront(Node*&head,int d){
    Node* temp=new Node(d);
    if(head==NULL) {head=temp;return;}
    temp->next=head;
    head=temp;
}
bool cycleDetection(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) {return true;}
    }
    
    return false;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void makeACycle(Node* &head,int a){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==a) break;
        temp=temp->next;
    }
    
    Node* temp2=head;
    while(temp2->next!=NULL) temp2=temp2->next;
    temp2->next=temp;
}
void cycleRemoval(Node*&head){
    if(cycleDetection(head)){
        Node* fast=head;
        Node* slow=head;
        while(true){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) break;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        Node* temp=slow;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
int main(){
    Node* head=NULL;
    insertAtFront(head,7);
    insertAtFront(head,6);
    insertAtFront(head,5);
    insertAtFront(head,4);
    insertAtFront(head,3);
    insertAtFront(head,2);
    insertAtFront(head,1);
    print(head);
    makeACycle(head,3);
    // print(head);
    cout<<cycleDetection(head)<<endl;
    cycleRemoval(head);
    print(head);
    return 0;

}