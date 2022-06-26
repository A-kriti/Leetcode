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
    string tree2str(TreeNode* root) {
        
        string s="";
        preorder(root, s);
        return s;
    }
    
    void preorder(TreeNode* root, string &s){
        
        if(!root)return;
        
        int t=root->val;
        s+=to_string(t);
        
        if(root->left==NULL && root->right==NULL)return;
        
        s+="(";
        preorder(root->left,s);
        s+=")";
        
        if(root->right){
             s+="(";
            preorder(root->right,s);
            s+=")";
        }
    }
};