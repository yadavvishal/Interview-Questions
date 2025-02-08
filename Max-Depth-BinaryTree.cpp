#include<bits/stdc++.h>
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
struct Node* insert(struct Node*root,int data){
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
int maxDepth(struct Node*root){
    if(root==NULL){
        return 0;
    }
    else {
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);

        if(lh > rh){
            return lh+1;
        }
        else{
            return rh+1;
        }
    }
}

void printTree(struct Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}
int main(){
    struct Node*root=NULL;
    root=insert(root,5);
    insert(root,3);
    insert(root,30);
    insert(root,83);
    insert(root,74);
    insert(root,82);
    insert(root,17);
    printTree(root);
    cout<<endl;
    int height=maxDepth(root);
    cout<<height;
}