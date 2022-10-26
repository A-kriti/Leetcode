class Solution {
public:
    vector<vector<int>>ans;
    
    void genrate(vector<int>v,int k, int n,int l){
        
        if(v.size()==k){
            int sum=0;
            for(int x:v){
                sum+=x;
            }
            
            if(sum==n){
                ans.push_back(v);
                return;
            }
        }
        
        for(int i=l;i<=9;i++){
            v.push_back(i);
            genrate(v,k,n,i+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        genrate(v,k,n,1);
        return ans;
    }
};