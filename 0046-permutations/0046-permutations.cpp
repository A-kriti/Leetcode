class Solution {
public:
    
    vector<vector<int>>ans;
    void genrate(vector<int>& nums,int l){
        
        int n=nums.size();
        if(l==n){
            ans.push_back(nums);
        }
        
        for(int i=l;i<n;i++){
            swap(nums[i],nums[l]);
            genrate(nums,l+1);
            swap(nums[i],nums[l]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        genrate(nums,0);
        return ans;
    }
};