class Solution {
public:
    vector<vector<int>>ans;
    
    void genrate(vector<int>& nums,int l){
        
        int n=nums.size();
        set<int>s;
        if(l==n){
            ans.push_back(nums);
        }
        
        for(int i=l;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                continue;
            }
            else{
                s.insert(nums[i]);
                swap(nums[i],nums[l]);
                genrate(nums,l+1);
                swap(nums[i],nums[l]);
            }
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        genrate(nums,0);
        return ans;
    }
};