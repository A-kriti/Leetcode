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
    bool isSameTree(TreeNode* p, TreeNode* q) {
   
        return checkif(p,q); 
    }
    
     bool checkif(TreeNode* p,TreeNode* q){
         
         if(!p && !q)return true;
        
        if(!p && q || p && !q || q->val!=p->val)return false;
         
         return checkif(p->left,q->left) & checkif(p->right,q->right);
    }
};