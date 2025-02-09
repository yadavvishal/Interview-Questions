#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};

struct Node*insert(int data){
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct Node*LCA(struct Node*root,struct Node*p,struct Node*q){
    if(root==NULL){
        return NULL;
    }
    if(root==p || root==q){
        return root;
    }
    struct Node *lca1=LCA(root->left,p,q);
    struct Node*lca2=LCA(root->right,p,q);

    if(lca1!=NULL && lca2!=NULL){
        return root;
    }
    if(lca1!=NULL){
        return lca1;
    }
    else{
        lca2;
    }
}
void printTree(struct Node*temp){
    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    printTree(temp->left);
    printTree(temp->right);
}
int main(){
    struct Node*root=insert(3);
    root->left=insert(5);
    root->right=insert(1);
    root->left->left=insert(6);
    root->left->right=insert(2);
    root->right->left=insert(0);
    root->right->right=insert(8);
    root->left->right->left=insert(7);
    root->left->right->right=insert(4);

    printTree(root);
    struct Node*p=root->left;
    struct Node*q=root->left->right->right;
    struct Node*ans=LCA(root,p,q);
    cout<<endl;
    cout<<ans->data;
}