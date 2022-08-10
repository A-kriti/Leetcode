// q -> https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int postorder(Node *node){
        
        if(!node)return 0;
        
        // if(root->left)t+==node->left->data;
        // if(root->right)t+=node->right->data;
        
        int x=postorder(node->left);
        int y=postorder(node->right);
        int z=node->data;
        node->data=x+y;
        return x+y+z;
    }
    
    void toSumTree(Node *node)
    {
        // Your code here
        postorder(node);
    }
};
