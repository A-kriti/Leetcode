class Solution {
public:
    void permute(vector<int>& nums,int l,vector<vector<int>>&v){
        
        int r=nums.size()-1;
        if(l==r){
            v.push_back(nums);
            return;
        }
        
        else{
            
            for(int i=l;i<=r;i++){
                
                swap(nums[i],nums[l]);
                permute(nums,l+1,v);
                swap(nums[i],nums[l]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int l=0;
        vector<vector<int>>v;
        permute(nums,l,v);
        
        return v;
        
    }
};