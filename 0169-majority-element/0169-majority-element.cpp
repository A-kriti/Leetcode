// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()/2];
        
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>m;
        int n=nums.size();
        for(int x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            if(x.second>(n/2))return x.first;
        }
        
        return -1;
    }
};


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
        
        
//     }
// };