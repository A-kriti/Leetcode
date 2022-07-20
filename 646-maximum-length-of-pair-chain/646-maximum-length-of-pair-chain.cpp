class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b){
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return a[1]<b[1];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end(),cmp);
        int n=pairs.size();
        
        int t[n];
        t[0]=1;
        
        for(int i=1;i<n;i++){
            t[i]=1;
            for(int j=0;j<i;j++){
                if(pairs[i][0]>pairs[j][1]){
                    t[i]=max(t[i],1+t[j]);
                }
            }
        }
        int m=t[0];
        for(int i=1;i<n;i++){
            m=max(m,t[i]);
        }
        
        return m;
    }
};