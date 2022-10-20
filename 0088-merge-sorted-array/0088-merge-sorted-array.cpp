class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0)return;
        int i=m-1;
        int j=n-1;
        
        int k=m+n-1;
        
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                
                nums1[k]=nums1[i];
                i--;
                // swap(nums1[i],nums2[j]);
                // sort(nums2.begin(),nums2.end());
                // i++;
                //j++;
            }
            
            else{
                //if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
            }
            
            k--;
        }
        
        while(i>=0){
            
            nums1[k]=nums1[i];
            i--;
            k--;
        }
        
        while(j>=0){
            
            nums1[k]=nums2[j];
            j--;
            k--;
        }
        
        
    }
};