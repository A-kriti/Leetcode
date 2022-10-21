class Solution {
public:
    
    int count(vector<int>& nums, int m){
        
        int sum=0;
        int c=1;
        
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>m){
                sum=nums[i];
                c++;
            }
            else{
                sum+=nums[i];
            }
        }
        return c;
        
    }
    
    int splitArray(vector<int>& nums, int m) {
        
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        
        int ans=low;
        
        while(low<=high){
            int mid=(low+high)/2;
            int n=count(nums,mid);
            if(n>m){
                low=mid+1;
            }
            
            else{
                ans=mid;
                high=mid-1;
            }
        }
        
        return ans;
    }
};