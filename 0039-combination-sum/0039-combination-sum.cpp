class Solution {
public:
    vector<vector<int>>ans;
    
    void genrate(vector<int>& candidates,vector<int>v,int target,int l){
        
        int n=candidates.size();
        if(target==0){
            ans.push_back(v);
            return;
        }
        
        if(target<0)return;
        
        for(int i=l;i<n;i++){
                v.push_back(candidates[i]);
                genrate(candidates,v,target-candidates[i],i);
                v.pop_back();
        }
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>v;
        genrate(candidates,v,target,0);
        return ans;
    }
};