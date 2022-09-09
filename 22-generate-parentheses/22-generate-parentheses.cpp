class Solution {
public:
    
    vector<string>s;
    
    void genrate(string curr,int open_count,int close_count,int n){
        
        if(curr.size()==2*n){
            s.push_back(curr);
            return;
        }
        if(open_count<n)genrate(curr+"(",open_count+1,close_count,n);
        if(close_count<open_count)genrate(curr+")",open_count,close_count+1,n);
    }
    
    vector<string> generateParenthesis(int n) {
        
        genrate("(",1,0,n);
        return s;
    }
};