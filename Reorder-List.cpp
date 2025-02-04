// Reorder the List
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node*head=NULL;

void ReorderList(struct Node*head){
    if(!head || !head->next || !head->next->next){
        return;
    }

    struct Node*slow=head;
    struct Node*fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct Node* curr=slow->next;
    struct Node*Next=NULL;
    struct Node *prev=NULL;

    slow->next=NULL;

    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;

    }
    struct Node*second=prev;

    struct Node*first=head;
    while(second){
        struct Node* temp1=first->next;
        struct Node*temp2=second->next;
        first->next=second;
        second->next=temp1;
        first=temp1;
        second=temp2;
    }
}
struct Node*insert(int data){
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=head;
    head=newnode;


}
void printList(){
    struct Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    printList();
    ReorderList(head);
    printList();
    
}