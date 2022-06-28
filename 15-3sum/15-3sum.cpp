class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        //a+b+c=0
        //b+c=-a
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int a=nums[i];
            int t=-a;
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                
                if(nums[j]+nums[k]==t){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
                
                else if(nums[j]+nums[k]<t)j++;
                else k--;
            }

            while(i+1<n && nums[i]==nums[i+1])i++;
            
        }
        
        return ans;
    }
};