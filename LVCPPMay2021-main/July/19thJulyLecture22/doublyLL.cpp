#include <iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node* prev;
    
    node(int val){
        this->val=val;
        this->next=this->prev=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
node* deleteFromAnIndex(node* head,int index){
    node* temp=head;
    while(index--){
        temp=temp->next;
    }
    node* previous=temp->prev;
    node* front=temp->next;
    previous->next=front;
    if(front!=NULL){
        front->prev=previous;
    }
    return head;
}
int main() {
    node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    print(head);
    insertAtTail(head,5);
    cout<<endl;
    print(head);
    node *root=deleteFromAnIndex(head,2);
    cout<<endl;
    print(head);
}
