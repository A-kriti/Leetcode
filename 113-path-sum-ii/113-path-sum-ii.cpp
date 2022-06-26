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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>>v;
        vector<int>t;
        preorder(root,v,t,targetSum);
        return v;
    }
    
    void preorder(TreeNode* root,vector<vector<int>>&v,vector<int>t,int targetSum){
        
        
        if(!root)return;
        
        t.push_back(root->val);
        
        
        if(root->left==NULL && root->right==NULL){
            
            int c=0;
            for(int j=0;j<t.size();j++){
                c+=t[j];
            }
            
            if(c==targetSum)v.push_back(t);
            return;
        }
       
        preorder(root->left,v,t,targetSum);
        preorder(root->right,v,t,targetSum);
        
    }
};