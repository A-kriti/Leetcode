class Solution {
public:
    
    void genrate(vector<vector<int>>&ans,vector<int>subset,vector<int>& nums,int l){
        
        ans.push_back(subset);
        
        for(int i=l;i<nums.size();i++){
            subset.push_back(nums[i]);
            genrate(ans,subset,nums,i+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int l=0;
        vector<int>subset;\
        genrate(ans,subset,nums,l);
        
        return ans;
        
    }
};