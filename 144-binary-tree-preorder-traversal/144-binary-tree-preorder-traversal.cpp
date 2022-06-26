/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        TreeNode* head = root;
        vector<int>v;
        preorder(head,v);
        
        return v;
        
    }
    
    void preorder(TreeNode* head,vector<int>&v){
        
        if(!head)return;
        
        v.push_back(head->val);
        preorder(head->left,v);
        preorder(head->right,v);
    }
};