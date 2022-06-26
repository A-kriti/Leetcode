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
    vector<int> findMode(TreeNode* root) {
        
        map<int,int>m;
        vector<int>v;
        preorder(root,m);
        
        int mode=0;
        for(auto x:m){
            mode=max(mode,x.second);
        }
        for(auto x:m){
            if(x.second==mode)v.push_back(x.first);
        }
        
        return v;
    }
    
    void preorder(TreeNode* root,map<int,int>&m){
        
        if(!root)return;
        
        m[root->val]++;
        preorder(root->left,m);
        preorder(root->right,m);
    }
};