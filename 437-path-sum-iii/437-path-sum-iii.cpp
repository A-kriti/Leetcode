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
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        int count=0;
        preorder(root,v,targetSum,count);
        return count;
    }
    
    void preorder(TreeNode* root,vector<int>v,int targetSum, int &count){
        
        if(!root)return;
        
        v.push_back(root->val);
        
        long long int c=0;
        for(int i = v.size()-1;i>=0;i--){
            c+=v[i];
            if(c==targetSum)count++;
        }
           
        preorder(root->left,v,targetSum,count);
        preorder(root->right,v,targetSum,count);
        
        //v.pop_back();
    }
};