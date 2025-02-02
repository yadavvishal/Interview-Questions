// Remove the nth node from the end on linked list

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
};
struct Node*head=NULL;

void insert(int data){
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->next=head;
    head=newnode;  

}
struct Node* remove(int n){
    
    struct Node*slow=head;
    struct Node*fast=head;

// we move forward fast pointer to n moves from slow pointer
    while(n--){
        fast=fast->next;
    }
    if(fast==NULL){
        return slow->next;
    }

    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return head;


}
void printList(){
    struct Node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL"<<endl;
   
}
int main(){
    
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
   
    printList();
    int  n=2;
    head=remove(n);
    printList();

}