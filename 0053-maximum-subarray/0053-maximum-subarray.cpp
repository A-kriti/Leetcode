class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;
        int ans=INT_MIN;
        for(int x:nums){
            if(sum<0){
                sum=0;
            }
            sum+=x;
            ans=max(ans,sum);
        }
        
        return ans;
    }
};