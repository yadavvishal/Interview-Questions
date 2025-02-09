// find the lowest common ancestor of BST

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
struct Node*insert(struct Node*root,int data){
    if(root==NULL){
        return newNode(data);
    }
    if((root->data )> data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
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
    if(lca1!=NULL){
        return lca1;
    }
    else{
        return lca2;
    }
}

void PrintTree(struct Node*temp){
    if(temp==NULL){
        return ;
    }
    cout<<temp->data<<" ";
    PrintTree(temp->left);
    PrintTree(temp->right);
}
int main(){
    struct Node*root=NULL;
    root=insert(root,21);
    insert(root,10);
    insert(root,3);
    insert(root,11);
    insert(root,31);
    insert(root,14);
    insert(root,12);
    insert(root,19);
    insert(root,33);
    insert(root,16);
    insert(root,36);
    PrintTree(root);
    cout<<endl;
    struct Node*p=root->left->left;
    struct Node*q=root->right->left;
    struct Node*ans=LCA(root,p,q);
    cout<<ans->data;
    
}