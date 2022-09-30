class Solution {
public:
    vector<string>v;
    
    void genrate(string s,int open_count,int close_count,int n){
        
        if(s.size()==2*n){
            v.push_back(s);
            return;
        }
        
        if(open_count<n)genrate(s+"(",open_count+1,close_count,n);
        if(close_count<open_count)genrate(s+")",open_count,close_count+1,n);
    }
    
    vector<string> generateParenthesis(int n) {
        
        genrate("",0,0,n);
        return v;
    }
};