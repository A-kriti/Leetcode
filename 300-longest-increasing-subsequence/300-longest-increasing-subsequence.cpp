class Solution {
public:
    
    int ceil_index(int v[],int r,int x){
        
        
        int l=0;
        
        while(l<r){
            int m=l+(r-l)/2;
            
            if(v[m]>=x){
                r=m;
            }
            else l=m+1;
        }
        
        return r;
    }
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int v[n];
        v[0]=nums[0];
        int len=1;
        
        for(int i=1;i<n;i++){
            if(nums[i]>v[len-1]){
                v[len]=nums[i];
                len++;
            }
            
            else{
                int x=ceil_index(v,len-1,nums[i]);
                v[x]=nums[i];
            }
        }
        
        // int m=INT_MIN;
        // for(int i=0;i<n;i++){
        //     m=max(m,v[i]);
        // }
        return len;
    }
};