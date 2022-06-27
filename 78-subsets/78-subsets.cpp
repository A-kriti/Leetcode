class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>subset;
        vector<vector<int>>ans;
        int i=0;
        generate(nums,i,subset,ans);
        
        return ans;
    }
    
    void generate(vector<int>& nums,int i,vector<int>&subset,vector<vector<int>>&ans){
        
        ans.push_back(subset);
        
        for(int j=i;j<nums.size();j++){
            
            subset.push_back(nums[j]);
            generate(nums,j+1,subset,ans);
            subset.pop_back();
        }
        
    }
};

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         vector<int>subset;
//         vector<vector<int>>ans;
//         int i=0;
//         generate(nums,i,subset,ans);
        
//         return ans;
//     }
    
//     void generate(vector<int>& nums,int i,vector<int>&subset,vector<vector<int>>&ans){
        
//         if(nums[i]==nums[i+1])continue;
//         if(i==nums.size()){
//             ans.push_back(subset);
//             return;
//         }
        
//         //exclude nums[i]
//         generate(nums,i+1,subset,ans);
//         subset.push_back(nums[i]);
//         //include nums[i]
//         generate(nums,i+1,subset,ans);
//         subset.pop_back();
//     }
// };