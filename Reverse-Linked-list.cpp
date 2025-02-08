#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
struct Node *root=NULL;

struct Node*insert(int data){
    struct Node *newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;
}

void reverse(){
    struct Node *current=root;
    struct Node*Next=NULL;
    struct Node*prev=NULL;
    while(current!=NULL){
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
        
    }
    root=prev;
}
void printlist()
{
    struct Node*temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    insert(10);
    insert(4);
    insert(5);
    insert(7);
    insert(8);
    insert(11);
    printlist();
    reverse();
    printlist();
}   