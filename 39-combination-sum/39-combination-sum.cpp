class Solution {
public:
    
    vector<vector<int>>ans;
    
    void fucn(vector<int>& candidates, int target,vector<int>v,int i){
        
        int n=candidates.size();
        if(target==0){
            ans.push_back(v);
            return;
        }
        
        while(i<n && target-candidates[i]>=0){
            
            v.push_back(candidates[i]);
            fucn(candidates,target-candidates[i],v,i);
            i++;
            v.pop_back();
        }
        
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        
        fucn(candidates,target,v,0);
        return ans;
    }
};