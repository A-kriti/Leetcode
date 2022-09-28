class Solution {
public:
    int merge(vector<int>& nums,int left,int mid,int right){
        
        int l=mid+1;
        int c=0;
        for(int i=left;i<=mid;i++){
            //2LL is a 2 of type long long.
            while(l<=right && nums[i]> 2LL *nums[l]){
                l++;
            }
            c+=(l-(mid+1));
        }
        
        
        int n1=mid-left+1;
        int n2=right-mid;
        int v1[n1];
        int v2[n2];
        
        for(int i=0;i<n1;i++){
            v1[i]=nums[left+i];
        }
        
        for(int i=0;i<n2;i++){
            v2[i]=nums[mid+i+1];
        }
        
        int i=0;
        int j=0;
        int k=left;
        
        while(i<n1 && j<n2){
            if(v1[i]>v2[j]){
                nums[k]=v2[j];
                k++;
                j++;
            }
            
            else{
                nums[k]=v1[i];
                k++;
                i++;
            }
        }
        
        while(i<n1){
                nums[k]=v1[i];
                k++;
                i++;
        }
        
        while(j<n2){
                nums[k]=v2[j];
                k++;
                j++;
        }
        
        return c;
            
    }
    
    int mergesort(vector<int>& nums,int left,int right){
        
        if(left>=right)return 0;
            
        int mid=(left+right)/2;
        int count=mergesort(nums,left,mid);
        count+=mergesort(nums,mid+1,right);
            
        count+=merge(nums,left,mid,right);
        return count;
        
    }
        
        
    int reversePairs(vector<int>& nums) {
        
        int n=nums.size();
        return mergesort(nums,0,n-1);       
    }
};