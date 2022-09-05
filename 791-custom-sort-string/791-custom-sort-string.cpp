class Solution {
public:
    string customSortString(string order, string s) {
        
        // o="cdbx"   s="axnbcdddc"
        //m={(a,1),(x,1),(n,1),(b,1),(c,2),(d,3)}
        
        //m={(a,1),(x,0),(n,1),(b,0),(c,0),(d,0)}
        
        // t=ccdddbxan
        
        map<char,int>m;
        
        for(char x:s){
            m[x]++;
        }
        
        int n=order.size();
        string t="";
        
        for(int i=0;i<n;i++){
            
            if(m.find(order[i])!=m.end()){
                
                for(int j=0;j<m[order[i]];j++){
                    t+=order[i];
                }
                m[order[i]]=0;
            }
        }
        
        for(auto x:m){
            if(x.second>0){
                
                for(int j=0;j<x.second;j++){
                    t+=x.first;
                }
            }
        }
        
        return t;
        
    }
};