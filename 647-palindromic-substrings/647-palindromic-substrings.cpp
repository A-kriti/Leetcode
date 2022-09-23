class Solution {
public:
    
    bool ispalindrome(string k){
        
        int i=0;
        int j=k.size()-1;
       
        while(i<=j){
            if(k[i]!=k[j])return false;
            i++;
            j--;
        }
        
        return true;
    }
    
    int countSubstrings(string s) {
        
        string t="";
        int c=0;
        for(int i=0;i<s.size();i++){
            string h="";
            for(int j=i;j<s.size();j++){
                h+=s[j];
                
                if(ispalindrome(h)){
                    c++;
               } 
            }
        }
        
        return c;
        
    }
};