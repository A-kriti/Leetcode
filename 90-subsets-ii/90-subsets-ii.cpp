class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>subset;
        vector<vector<int>>ans;
        int i=0;
        genrate(nums,subset,ans,i);
        
        
        return ans;
    }
    
    void genrate(vector<int>& nums,vector<int>& subset,vector<vector<int>>& ans,int i){
      
        ans.push_back(subset);  
        for(int j=i;j<nums.size();j++){
            
            if(i!=j && nums[j]==nums[j-1])continue;
            subset.push_back(nums[j]);
            genrate(nums,subset,ans,j+1);
            subset.pop_back();
        }
            
    }
};