class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        
        for(char x:t){
            
            if(m.find(x)!=m.end())m[x]--;
            
            else return false;
        }
        
        for(auto x:m){
            
            if(x.second!=0)return false;
        }
        
        return true;
    }
};