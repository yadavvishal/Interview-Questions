// PostOrder Traversal of tree
// time complexcity - O(n)

#include <bits/stdc++.h>
using namespace std;

struct Node{
    
    int data;
    Node*left;
    Node*right;
};
struct Node*newNode(int data){
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct Node*insert(struct Node*root,int data){
    if(root==NULL){
        return newNode(data);
    }
    if((root->data) > data){
        root->left=insert(root->left,data);
    }
    if((root->data) < data){
        root->right=insert(root->right,data);
    }
    return root;
}

void postorder(struct Node*root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    struct Node*root=NULL;
    root=insert(root,10);
    insert(root,3);
    insert(root,30);
    insert(root,83);
    insert(root,74);
    insert(root,82);
    insert(root,17);
    
    postorder(root);
    return 0;
}
