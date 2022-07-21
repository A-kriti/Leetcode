class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int t[n];
        t[0]=0;
        for(int i=1;i<n;i++){
            t[i]=INT_MAX;
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]+j>=i){
                    if(t[j]!=INT_MAX){
                        t[i]=min(t[i],t[j]+1);
                    }
                }
            }
        }
        
        return t[n-1];
    }
};