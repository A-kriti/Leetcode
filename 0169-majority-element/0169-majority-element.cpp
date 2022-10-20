
//Method 1
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()/2];
        
//     }
// };

//Method 2
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         map<int,int>m;
//         int n=nums.size();
//         for(int x:nums){
//             m[x]++;
//         }
        
//         for(auto x:m){
//             if(x.second>(n/2))return x.first;
//         }
        
//         return -1;
//     }
// };


//Method 3
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int v=0;
        int c=0;
        
        for(int i=0;i<n;i++){
            
            if(v==0){
                c=nums[i];
            }
            
            if(nums[i]==c)v++;
            
            else{
                v--;
            }
        }
        
        return c;
    }
};