class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<int>subset;
        bool pre=false;
        generate(nums,i,subset,pre);
        
        return ans;
    }
    
    void generate(vector<int>& nums,int i,vector<int>&subset,bool pre){

        
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        
        //exclude nums[i];
        generate(nums,i+1,subset,false);
        
        if(i>0 && nums[i]==nums[i-1] && !pre)return;
        
        subset.push_back(nums[i]);
        //include nums[i];
        generate(nums,i+1,subset,true);
        subset.pop_back(); //backtrack
        
        
    }
    
};