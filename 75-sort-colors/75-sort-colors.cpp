class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        
        int x1=0;
        int x2=0;
        int x3=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)x1++;
            if(nums[i]==1)x2++;
            if(nums[i]==2)x3++;
        }
        
        int k=0;
        while(x1){
            nums[k]=0;
            x1--;
            k++;
        }
        
        while(x2){
            nums[k]=1;
            x2--;
            k++;
        }
        
        while(x3){
            nums[k]=2;
            x3--;
            k++;
        }
        
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        
//         int n=nums.size();
        
//         int left=0;
//         int mid=0;
//         int right=n-1;
        
//         while(mid<=right){
            
//             if(nums[mid]==0){
//                 swap(nums[mid],nums[left]);
//                 left++;
//                 mid++;
//             }
            
//             else if(nums[mid]==1){
//                 mid++;
//             }
            
//             else if(nums[mid]==2){
//                 swap(nums[mid],nums[right]);
//                 right--;
//             }
//         }
        
//     }
// };