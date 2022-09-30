class Solution {
public:
    set<string>v;
    
    void genrate(string in,string out){
        
        if(in.size()==0){
            v.insert(out);
            return;
        }
        
        string out1=out;
        string out2=out;
        
        out1+=toupper(in[0]);
        out2+=tolower(in[0]);
        
        in.erase(in.begin()+0);
        genrate(in,out1);
        genrate(in,out2);
    }
    
    vector<string> letterCasePermutation(string s) {
        
        genrate(s,"");
        vector<string>v1(v.begin(),v.end());
        return v1;
    }
};