// Level order traversal -  We are using Queue here
// Time Complexcity - O(n)

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
        root->right= insert(root->right,data);
    }
    return root;
}

void levelOrder(struct Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        struct Node*temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
int main() {
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
    
    levelOrder(root);
    return 0;
}
