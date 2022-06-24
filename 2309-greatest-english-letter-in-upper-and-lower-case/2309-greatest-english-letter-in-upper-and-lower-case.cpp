class Solution {
public:
    string greatestLetter(string s) {
        
        string t="";
        string r="*";
        int w=r[0]-'0';
        map<int,int>m;
        //m.insert({r[0],w});
        
        for(char y:s){
            int x=y-'0';
            int w1=r[0]-'0';
            if(m.find(x+32)!=m.end()){
                if(x>w1)r=y;
                //return r;
            }
            
            else if(m.find(x-32)!=m.end()){
                
                if(x-32>w1)r=toupper(y);
                //return r;
            }
            
            else m[x]++;
        }
        
        if(r!="*")return r;
        
        return t;
    }
};