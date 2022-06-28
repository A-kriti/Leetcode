class Solution {
public:
    bool isPalindrome(string s) {
        
        string t="";
        int n=s.size();
        
        for(char x:s){
            
            if(isalpha(x) || isdigit(x))(t+=tolower(x));
        }
        
        string g=t;
        reverse(g.begin(),g.end());
        
        return t==g;
    }
};