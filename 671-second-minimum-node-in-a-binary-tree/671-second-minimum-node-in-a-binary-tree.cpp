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
    int findSecondMinimumValue(TreeNode* root) {
       
        map<int,int>m;
        vector<int>v;
        preorder(root,m);
        
        int min_val=INT_MAX;
        int second_min_val=INT_MAX;
        for(auto x:m){
            min_val=min(min_val,x.first);
        }
       
        for(auto x:m){
            if(x.first!=min_val)second_min_val=min(second_min_val,x.first);
        } 
        
        return (m.size()>1)?second_min_val:-1;
    }
    
    void preorder(TreeNode* root,map<int,int>&m){
        
        if(!root)return;
        
        m[root->val]++;
        preorder(root->left,m);
        preorder(root->right,m);
    }
};