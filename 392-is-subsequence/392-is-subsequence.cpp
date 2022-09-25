class Solution {
public:
    bool isSubsequence(string s, string k) {
        
         
        int n=s.size();
        int m=k.size();
        int t[n+1][m+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    t[i][j]=0;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==k[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else 
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        
        return(t[n][m]==s.size());

    }
};

// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
        
//         int n=s.size()-1;
//         int m=t.size()-1;
        
//         int ans=0;
//         while(n>=0 && m>=0){
            
//             if(s[n]==t[m]){
//                 ans++;
//                 n--;
//                 m--;
//             }
            
//             else m--;
            
//         }
        
//         return(ans==s.size());

//     }
// };