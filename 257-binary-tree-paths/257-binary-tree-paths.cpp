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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        preorder(root,v,s);
        return v;
    }
    
    void preorder(TreeNode* root,vector<string>&v,string s){
        
        if(!root)return;
        
        s+=to_string(root->val);
        s+="->";
        
        
        if(!root->left && !root->right){
            s.pop_back();
            s.pop_back();
            v.push_back(s);
        }
        
        preorder(root->left,v,s);
        preorder(root->right,v,s);
    }
    
};