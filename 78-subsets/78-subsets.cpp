class Solution {
public:
    
    vector<vector<int>>ans;
    
    void genrate(vector<int>& nums,vector<int>v,int l){
        
        ans.push_back(v);
        int n=nums.size();
        
        for(int i=l;i<n;i++){
            v.push_back(nums[i]);
            genrate(nums,v,i+1);
            v.pop_back();
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>v;
        genrate(nums,v,0);
        return ans;
    }
};