class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // sort(nums.begin(),nums.end(),greater<int>());
        // return (nums[0]-1)*(nums[1]-1);
        int n=nums.size();
        int max1=n-1;
        int max2=n-1;
        
        for(int i=0;i<n;i++){
            if(nums[i]>nums[max1])max1=i;
        }
        for(int i=0;i<n;i++){
            if(i!=max1 && (max2==n-1 || nums[i]>nums[max2]))max2=i;
        }
        
        return (nums[max1]-1)*(nums[max2]-1);
    }
};