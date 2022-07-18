class Solution {
public:
    vector<vector<int>>ans;
    void genrate(vector<int>& nums,vector<int>&subset,int c){
        ans.push_back(subset);
        
        for(int i=c;i<nums.size();i++){
            subset.push_back(nums[i]);
            genrate(nums,subset,i+1);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
        int c=0;
        genrate(nums,subset,c);
        return ans;
    }
};