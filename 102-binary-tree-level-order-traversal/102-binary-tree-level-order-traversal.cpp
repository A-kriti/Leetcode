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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>v;
        if(!root)return v;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            vector<int>x;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                x.push_back(t->val);
                
                if(t->left)q.push(t->left); 
                if(t->right)q.push(t->right);
            }
            v.push_back(x);
        }
        
        return v;
    }
};