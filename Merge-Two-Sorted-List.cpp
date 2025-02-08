#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
};

struct Node*insert(struct Node *head, int data){
    struct Node*newnode = new Node();
    newnode->data=data;
    newnode->next=head;
    return newnode;
}

struct Node* mergeTwoLists(struct Node* list1, struct Node* list2) {
   struct Node dummy;
   dummy.data=NULL;
    struct Node* temp = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }
    
    temp->next = (list1 != NULL) ? list1 : list2;  // Attach remaining nodes
    return dummy.next;  // Head of merged list
}

void printlist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){

    struct Node *list1=NULL;
    struct Node*list2=NULL;
    list1=insert(list1,15);
    list1=insert(list1,12);
    list1=insert(list1,10);

    printlist(list1);

    list2= insert(list2,25);
    list2=insert(list2,20);
    list2=insert(list2,13);
    printlist(list2);

    struct Node* temp=mergeTwoLists(list1,list2);
    printlist(temp);
}