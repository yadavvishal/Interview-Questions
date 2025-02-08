#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
};
struct Node*root=NULL;

void insert(int data){
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;
}

bool CheckCycle(){
    struct Node*slow=root;
    struct Node*fast=root;

    while(fast !=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    if(slow==fast){
        return true;
    }
    return false;
}

void printlist(){
    struct Node*temp=root;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    insert(10);
    insert(12);
    insert(14);
    insert(13);
    insert(20);
    insert(21);
    printlist();
    bool ans=CheckCycle();

    if(ans==true){
        cout<<"The linkedlist is Cyclic";
    }
    else{
        cout<<"The Linkedlist is not cyclic";
    }
    
}