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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans=0;
        maxdepth(root,ans);
        return ans;
        
    }
    
    int maxdepth(TreeNode* root,int &ans){
        
        if(!root)return 0;
        
        int x=maxdepth(root->left,ans);
        int y=maxdepth(root->right,ans);
        
        ans=max(ans,x+y);
        return 1+max(x,y);
        
    }
};