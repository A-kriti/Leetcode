class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int sum=0;
        vector<int>subset;
        genrate(nums,0,sum,subset);
        return sum;
    }
    
    void genrate(vector<int>& nums,int i,int &sum,vector<int>&subset){
        
        if(i==nums.size()){
            int y=0;
            for(auto x:subset){
                y^=x;
            }
            sum+=y;
            return;
        }
        
        //exclude nums[i]
        genrate(nums,i+1,sum,subset);
        subset.push_back(nums[i]);
        //include nums[i]
        genrate(nums,i+1,sum,subset);
        subset.pop_back();
    }
};