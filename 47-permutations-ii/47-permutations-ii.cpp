class Solution {
public:
    
    void permute(vector<int>& nums,vector<vector<int>>&ans, int l){
        
        int r=nums.size()-1;
        unordered_set<int>s;
        if(l==r){
            ans.push_back(nums);
            return;
        }
        
        else{
            for(int i=l;i<=r;i++){
                if(s.find(nums[i])!=s.end())
                    continue;
                
                else{
                    s.insert(nums[i]);
                    swap(nums[i],nums[l]);
                    permute(nums,ans,l+1);
                    swap(nums[i],nums[l]);
                }
                
            }
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int l=0;
        permute(nums,ans,l);
        return ans;
    }
};