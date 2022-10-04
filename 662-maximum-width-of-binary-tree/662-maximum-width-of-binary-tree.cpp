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
    int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)return 0;
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        
        while(!q.empty()){
            int minn=q.front().second;
            int n=q.size();
            
            int first,last;
            for(int i=0;i<n;i++){
                int curr=q.front().second-minn;
                TreeNode* curr_root=q.front().first;
                q.pop();
                
                if(i==0)first=curr;
                if(i==n-1)last=curr;
                
                if(curr_root->left){
                    q.push({curr_root->left,(long long)curr*2+1});
                }
                if(curr_root->right){
                    q.push({curr_root->right,(long long)curr*2+2});
                }
            }
            
            ans=max(ans,last-first+1);
        }
        
        return ans;
        
    }
};