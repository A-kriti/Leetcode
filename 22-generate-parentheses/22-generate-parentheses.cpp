class Solution {
public:
    
    vector<string>v;
    
    void genrate(int n,string s,int lc,int rc){
        
        if(s.size()==2*n){
            v.push_back(s);
            return;
        }
        
        if(lc<n)genrate(n,s+"(",lc+1,rc);
        if(rc<lc)genrate(n,s+")",lc,rc+1);
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        genrate(n,"(",1,0);
        return v;
    }
};