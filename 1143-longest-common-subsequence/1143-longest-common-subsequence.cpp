class Solution {
public:
    int t[1001][1001];
    
    int lcs(string &text1, string &text2,int n,int m){
        
        if(m<0 || n<0)return 0;
        
        if(t[n][m]!=-1)return t[n][m];
        
        if(text1[n]==text2[m]){
            return 1+lcs(text1,text2,n-1,m-1);
        }
        
        return t[n][m]=max(lcs(text1,text2,n-1,m),lcs(text1,text2,n,m-1));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int n=text1.size();
        int m=text2.size();
        memset(t,-1,sizeof(t));
        int ans=lcs(text1,text2,n-1,m-1);
        
        return ans;
    }
};