class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        int i=0;
        int j=1;
        int c=1;
        
        while(i<n && j<n){
            
            if(nums[i]==nums[j]){
                
                while(j<n && nums[i]==nums[j]){
                    nums[j]=INT_MAX;
                    j++;
                }
                i=j-1;
            }
            
            else{
                c++;
                i++;
                j++;
            }
        }
        
        sort(nums.begin(),nums.end());
        return c;
    }
};