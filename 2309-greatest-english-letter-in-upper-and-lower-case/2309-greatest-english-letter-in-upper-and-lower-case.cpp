class Solution {
public:
    string greatestLetter(string s) {
        
        string t="";
        string r="*";
        
        map<int,int>m;
        
        for(char y:s){
            int x=y-'0';
            int w1=r[0]-'0';
            if(m.find(x+32)!=m.end()){
                
                if(x>w1)r=y;
            }
            
            else if(m.find(x-32)!=m.end()){
                
                if(x-32>w1)r=toupper(y);
            }
            
            else m[x]++;
        }
        
        if(r!="*")return r;
        
        return t;
    }
};