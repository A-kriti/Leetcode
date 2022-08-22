class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>v(n);
        
        if(n==1)return nums[0];
        
        if(n==2)return max(nums[0],nums[1]);
        
        v[0]=nums[0];
        v[1]=nums[1];
        v[2]=max(nums[1],nums[0]+nums[2]);
        
        for(int i=3;i<n;i++){
            
            int inc=nums[i]+max(v[i-2],v[i-3]);
            int exc=v[i-1];
            v[i]=max(inc,exc);
        }
        
        return v[n-1];
    }
};