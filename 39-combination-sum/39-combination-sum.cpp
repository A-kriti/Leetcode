class Solution {
public:
    set<vector<int>>s;
    
    void fun(vector<int>& candidates, int target,vector<int>v,int i){
        
        if(target==0){
            sort(v.begin(),v.end());
            s.insert(v);
        }
        
        while(i<candidates.size() && target-candidates[i]>=0){
            
                v.push_back(candidates[i]);
                fun(candidates,target-candidates[i],v,i);
                i++;
                v.pop_back();
            
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        fun(candidates,target,v,0);
        
        vector<vector<int>>ans(s.begin(),s.end());
        
        return ans;
    }
};