class Solution {
public:
    
    vector<vector<int>>ans;
    
    void genrate(vector<int>& candidates, int target,vector<int>v,int l){
        
        int n=candidates.size();
        if(target==0){
            ans.push_back(v);
            return;
        }
        
        if(target<0)return;
        
        for(int i=l;i<n;i++){
            
            if(i!=l && candidates[i]==candidates[i-1])continue;
            v.push_back(candidates[i]);
            genrate(candidates,target-candidates[i],v,i+1);
            v.pop_back();
        }
    
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        genrate(candidates,target,v,0);
        return ans;
    }
};