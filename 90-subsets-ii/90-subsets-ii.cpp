class Solution {
public:
    vector<vector<int>>ans;
    
    void genrate(vector<int>& nums,vector<int>v,int l){
        
        int n=nums.size();
        ans.push_back(v);
        
        for(int i=l;i<n;i++){
            if(i!=l && nums[i]==nums[i-1])continue;
            v.push_back(nums[i]);
            genrate(nums,v,i+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>v;
        genrate(nums,v,0);
        return ans;
    }
};