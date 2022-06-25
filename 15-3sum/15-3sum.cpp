class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> v;
          
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int a=nums[i]; // a+b+c=0
            int x=-a; // b+c=-a
            int start=i+1;
            int end=n-1;
            
            while(start<end){
                
                if(nums[start]+nums[end]==x){
                    v.push_back({nums[i],nums[start],nums[end]});
                    while(start<end && nums[start]==nums[start+1])start++;
                    while(start<end && nums[end]==nums[end-1])end--;
                    start++; 
                    end--;
                    
                }
                
                else if(nums[start]+nums[end]>x){
                    end--;
                }
                
                else {
                    start++;
                }
            }
            
            while(i+1<n && nums[i+1]==nums[i])i++;
        }
        
        return v;

    }
};