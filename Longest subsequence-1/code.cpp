  int longestSubsequence(int N, int A[])
    {
        // code here
        int ans=INT_MIN;
        map<int,int>m;
        
        for(int i=0;i<N;i++){
            
            
            int l=0;
            if(m[A[i]-1])l=m[A[i]-1];
            
            if(m[A[i]+1] && m[A[i]+1]>l)l=m[A[i]+1];
            
            m[A[i]]=l+1;
        }
        
        for(auto x:m){
            ans=max(ans,x.second);
        }
        
        return ans;
    }
    
    
    // int longestSubsequence(int N, int A[])
    // {
    //     // code here
    //     int ans=INT_MIN;
    //     int t[N];
    //     for(int i=0;i<N;i++){
    //         t[i]=1;
    //     }
        
    //     for(int i=1;i<N;i++){
    //         for(int j=0;j<i;j++){
                
    //             if(abs(A[i]-A[j])==1){
    //                 t[i]=max(t[i],t[j]+1);
                    
    //             }
    //         }
    //     }
        
    //     for(int i=0;i<N;i++){
    //         ans=max(ans,t[i]);
    //     }
        
    //     return ans;
    // }
