class Solution {
public:
    
    vector<vector<int>>ans;
    
    void genrate(vector<int>& nums,vector<int>s,int l){
        
        ans.push_back(s);
        
        for(int i=l;i<nums.size();i++){
            s.push_back(nums[i]);
            genrate(nums,s,i+1);
            s.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>s;
        genrate(nums,s,0);
        return ans;
    }
};