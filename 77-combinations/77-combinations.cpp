class Solution {
public:
    
    vector<vector<int>>ans;
    void genrate(vector<int>&nums,vector<int>v,int k,int l){
        
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        
        int n=nums.size();
        for(int i=l;i<n;i++){
            v.push_back(nums[i]);
            genrate(nums,v,k,i+1);
            v.pop_back();
            
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>nums;
        vector<int>v;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        
        genrate(nums,v,k,0);
        return ans;
    }
};