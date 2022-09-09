class Solution {
public:
    vector<vector<int>>ans;
    
    void genrate(int k,int n,vector<int>v,int l){
        
        if(v.size()==k){
            int c=0;
            for(int x:v){
                c+=x;
            }
            
            if(c==n){
                ans.push_back(v);
            }
        }
        
        for(int i=l;i<=9;i++){
            v.push_back(i);
            genrate(k,n,v,i+1);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        // v={1 2 3 4 5 6 7 8 9} 9Ck
        vector<int>v;
        genrate(k,n,v,1);
        return ans;
        
    }
};