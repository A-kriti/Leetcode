class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>v;
        int c=0;
        
        for(int x:nums){
            c+=x;
            v.push_back(c);
        }
        
        return v;
    }
};