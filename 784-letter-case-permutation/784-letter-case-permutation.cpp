class Solution {
public:
    vector<string>v;
    
    void genrate(string in,string out){
        
        if(in.size()==0){
            v.push_back(out);
            return;
        }
        
        string out1=out;
        string out2=out;
        
        if(isalpha(in[0])){
            
            out1+=toupper(in[0]);
            out2+=tolower(in[0]);

            in.erase(in.begin()+0);
            genrate(in,out1);
            genrate(in,out2);
        }
        else{
            out1+=(in[0]);
        
            in.erase(in.begin()+0);
            genrate(in,out1);
        }
        
    }
    
    vector<string> letterCasePermutation(string s) {
        
        genrate(s,"");
        return v;
    }
};