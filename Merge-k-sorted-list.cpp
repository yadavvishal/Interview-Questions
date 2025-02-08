#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
Node* insert(Node* head, int data) {
    Node* newnode = createNode(data);
    if (!head) return newnode;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

// Function to insert a node at the tail
void insertAtTail(Node*& head, int data) {
    Node* temp = createNode(data);

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

// Function to merge k sorted linked lists
Node* mergeKlist(vector<Node*>& lists) {
    vector<int> ans;

    for (Node* it : lists) {
        while (it != NULL) {
            ans.push_back(it->data);
            it = it->next;
        }
    }
    sort(ans.begin(), ans.end());

    Node* res = NULL;
    for (int i = 0; i < ans.size(); i++) {
        insertAtTail(res, ans[i]);
    }

    return res;
}

// Function to print a linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<Node*> lists;
    lists.resize(3, NULL);

    lists[0] = insert(lists[0], 1);
    lists[0] = insert(lists[0], 4);
    lists[0] = insert(lists[0], 5);

    lists[1] = insert(lists[1], 1);
    lists[1] = insert(lists[1], 3);
    lists[1] = insert(lists[1], 4);

    lists[2] = insert(lists[2], 2);
    lists[2] = insert(lists[2], 6);

    cout << "Input Linked Lists:" << endl;
    for (int i = 0; i < lists.size(); i++) {
        printList(lists[i]);
    }

    Node* mergedlist = mergeKlist(lists);
    cout << "Merged Sorted Linked List:" << endl;
    printList(mergedlist);

    return 0;
}
