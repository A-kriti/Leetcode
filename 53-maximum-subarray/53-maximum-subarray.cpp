class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //kadane's Alogorithm
        int max_sum=INT_MIN;
        int sum=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
            max_sum=max(max_sum,sum);
            if(sum<0)sum=0;
        }
        
        return max_sum;
        
        // O(n^2) approach using prefix sum but it throws TLE
//         int max_sum=INT_MIN;
//         int sum=0;
//         int n=nums.size();
        
//         int curr[n+1];
//         curr[0]=0;
        
//         for(int i=1;i<=n;i++){
//             curr[i]=curr[i-1]+nums[i-1];
//         }
        
//         for(int i=1;i<=n;i++){
//             sum=0;
//             for(int j=0;j<i;j++){
//                 sum=curr[i]-curr[j];
//                 max_sum=max(max_sum,sum);
//             }
//         }
        
//         return max_sum;
    }
};