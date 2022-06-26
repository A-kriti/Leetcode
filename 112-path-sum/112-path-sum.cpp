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
       bool hasPathSum(TreeNode* root, int targetSum, int c=0) {
           
           if(!root)return false;
           
           c+=root->val;
           if(root->left==NULL && root->right==NULL){
               if(c==targetSum)return true;
           }
           
           return hasPathSum(root->left,targetSum,c) || hasPathSum(root->right,targetSum,c);
           
       }
             
             
//     bool hasPathSum(TreeNode* root, int targetSum) {
        
//         int sum=0;
//         vector<int>v;
        
//         preorder(root,v,sum);
        
//         for(int x:v){
//             if(x==targetSum)return true;
//         }
        
//         return false;
        
//     }
    
//     void preorder(TreeNode* root,vector<int> &v,int sum){
        
//         if(!root){
            
//             return;
//         }
        
//         sum+=root->val;
        
//         if(root->left==NULL && root->right==NULL){
//             v.push_back(sum);
//             return;
//         }
        
//         preorder(root->left,v,sum);
//         preorder(root->right,v,sum);
//     }
    
};