int editDistance(string s, string t) {
        // Code here
        int n=s.size();
        int m=t.size();
        int l[n+1][m+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 && j==0)l[i][j]=0;
                else if(i==0)l[i][j]=j;
                else if(j==0)l[i][j]=i;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1])
                    l[i][j]=l[i-1][j-1];
                else 
                    l[i][j]=1+min(l[i-1][j], min(l[i][j-1],l[i-1][j-1]));
            }
        }
       
        return l[n][m];
    }
