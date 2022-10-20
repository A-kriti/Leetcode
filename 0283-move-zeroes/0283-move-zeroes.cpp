class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        int j=1;
        int i=0;
        
        while(i<n && j<n){
            
            if(nums[i]!=0){
                i++;
                j=i+1;
            }
            
           // if(nums[j])
            
            else if(nums[j]!=0 && nums[i]==0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
            
            else{

                j++;
            }
        }
        

    }
};