// use DFS approach here
// Time Complexcity- O(n)

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
bool hasPathSum(struct Node*root, int targetSum){
    if(!root){
        return false;
    }
    if(!root->left && !root->right && targetSum==root->data){
        return true;
    }
    return hasPathSum(root->left,targetSum-root->data) || hasPathSum(root->right,targetSum-root->data);

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
    struct Node*root=insert(5);
    root->left=insert(4);
    root->right=insert(8);
    root->left->left=insert(11);
    root->right->left=insert(13);
    root->right->right=insert(4);
     root->left->left->left = insert(7);
    root->left->left->right=insert(2);
    root->right->right->right=insert(1);

    printTree(root);
    cout<<endl;
    int targetSum=22;
    bool ans=hasPathSum(root,targetSum);
    cout<<ans;
}

