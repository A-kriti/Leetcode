class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        int t[n][n];
        string ans="";
        int m=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                t[i][j]=0;
            }
        }
        
        for(int dif=0;dif<n;dif++){
            for(int i=0,j=i+dif;j<n;j++,i++){
                
                if(i==j)t[i][j]=1;
                
                else if(dif==1){
                    if(s[i]==s[j])t[i][j]=2;
                    else t[i][j]=0;
                }
                
                else{
                    
                    if(s[i]==s[j] && t[i+1][j-1]){
                        t[i][j]=t[i+1][j-1]+2;
                    }
                }
                
                if(t[i][j]){
                    if(j-i+1>m){
                        m=j-i+1;
                        ans=s.substr(i,m);
                    }
                }
            }
            
        }
        
        return ans;
    }
};