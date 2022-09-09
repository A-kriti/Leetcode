class Solution {
public:
    
    vector<vector<int>>ans;
    void genrate(int n,vector<int>v,int k,int l){
        
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        
        for(int i=l;i<=n;i++){
            v.push_back(i);
            genrate(n,v,k,i+1);
            v.pop_back();
            
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>v;
        genrate(n,v,k,1);
        return ans;
    }
};