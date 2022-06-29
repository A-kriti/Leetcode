class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // method 1(min heap)
        priority_queue<int,vector<int>,greater<int>>p;
        
        int n=nums.size();
    
        for(int i=0;i<n;i++){
            p.push(nums[i]);
            if(p.size()>k)p.pop();
        }
        
        return p.top();
        
//         // method 2(max heap)
//         priority_queue<int>p;
        
//         int n=nums.size();
//         int ans;
//         for(int i=0;i<n;i++){
//             p.push(nums[i]);
//         }
        
//         while(k){
//             ans=p.top();
//             p.pop();
//             k--;
//         }
//         return ans;
        
        //method 3
        
         /*sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int ans=nums[n-k];
        return ans;*/
        
    }
};