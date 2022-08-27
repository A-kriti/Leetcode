class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int start=-1;
        int ans=0;
        
        vector<int>v(256,-1);
        
        for(int i=0;i<n;i++){
            
            int t=s[i];
            if(v[t]>start){
                start=v[t];
            }
            
            v[t]=i;
            ans=max(ans, i-start);
            
        }
        
        return ans;
    }
};