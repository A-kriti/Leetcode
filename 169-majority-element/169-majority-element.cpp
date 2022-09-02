class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        
        int r;
        
        if(n%2==0){
            r=n/2;
        }
        else
            r=(n+1)/2;
        
        for(auto x:m){
            if(x.second>=r)
                return x.first;   
        }
        
        return -1;
    }
};