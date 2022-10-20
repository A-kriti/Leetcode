class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>l(n);
        vector<int>r(n);
        
        
        
        int lsum=0;
        int rsum=0;
        
        for(int i=0;i<n;i++){
            
            lsum+=nums[i];
            rsum+=nums[n-1-i];
            
            l[i]=lsum;
            r[n-1-i]=rsum;
        }
        
        for(int i=0;i<n;i++){
            if(l[i]==r[i])return i;
        }
        
        return -1;
        
    }
};