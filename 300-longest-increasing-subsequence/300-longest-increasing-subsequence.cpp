class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int v[n+1];
        v[0]=1;
        
        for(int i=1;i<n;i++){
            v[i]=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                    v[i]=max(v[i],v[j]+1);
            }
        }
        
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            m=max(m,v[i]);
        }
        return m;
    }
};