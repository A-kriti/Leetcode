class Solution {
public:
    
    vector<string>v;
    
    void genrate(string &digits,map<int,string>&m,string s,int l){
        
        if(s.size()==digits.size()){
            v.push_back(s);
            return;
        }
        
        int t=digits[l]-'0';
        for(int i=0;i<m[t].size();i++){
            s+=m[t][i];
            genrate(digits,m,s,l+1);
            s.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        map<int,string>m;
        m.insert({2,"abc"});
        m.insert({3,"def"});
        m.insert({4,"ghi"});
        m.insert({5,"jkl"});
        m.insert({6,"mno"});
        m.insert({7,"pqrs"});
        m.insert({8,"tuv"});
        m.insert({9,"wxyz"});
        
        if(digits.size()==0)return v;
        genrate(digits,m,"",0);
        return v;
        
    }
};