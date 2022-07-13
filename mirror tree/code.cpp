

#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node (int k){
    data=k;
    left=right=NULL;
    }
};



void preorder(Node* root){
    if(!root)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

void invert(Node* root){
    
    if(!root)return;
    Node* t=root->left;
    root->left=root->right;
    root->right=t;
    invert(root->left);
    invert(root->right);
    
}

int main()
{
    Node* root=new Node(5);
    root->left=new Node(15);
    root->right=new Node(20);
    invert(root);
    preorder(root);

    return 0;
}
