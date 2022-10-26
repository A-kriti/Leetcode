class Solution {
public:
    
    vector<vector<int>>ans;
   
    void genrate(vector<int>& candidates,vector<int>v ,int target ,int l){
        
        int n=candidates.size();
        if(target==0){
            ans.push_back(v);
            return;
        }
        
        if(target<0)return;
        
        for(int i=l;i<n;i++){
            if(i!=l && candidates[i]==candidates[i-1])continue;
            v.push_back(candidates[i]);
            genrate(candidates,v,target-candidates[i],i+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        genrate(candidates,v,target,0);
        return ans;
    }
};