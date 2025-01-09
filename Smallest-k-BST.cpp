// Smallest number in the BST
// Time Complexicity : O(log(N)+k)

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    
};
struct Node* newNode(int data){
    struct Node *newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void inorder(struct Node*root,int &k, int&ans){
    if(root==NULL || k==0){
        return;
    }
    inorder(root->left,k,ans);
    k--;
    if(k==0){
        ans=root->data;
        return;
    }
    inorder(root->right,k,ans);
}
struct Node*insert(struct Node* root,int data){
    if(root==NULL){
        return newNode(data);
    }
    if((root->data )>data){
        root->left=insert(root->left,data);
    }
    else if((root->data)<data){
        root->right=insert(root->right,data);
    }
    return root;
}

int main() {
   
    struct Node*root=NULL;
    root=insert(root,9);
    insert(root,3);
    insert(root,30);
    insert(root,83);
    insert(root,74);
    insert(root,82);
    insert(root,17);
    int ans=-1;
    int k=3; // third smallest in BST
    inorder(root,k,ans);
    cout<<ans;
    return 0;
}
