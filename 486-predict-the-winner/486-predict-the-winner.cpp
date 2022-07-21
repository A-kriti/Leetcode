class Solution {
public:
    int t[21][21];
    int sol(vector<int>& nums,int i,int j){
        
        if(i>j)return 0;
        if(t[i][j]!=-1)return t[i][j];
        
        int x=nums[i]+min(sol(nums,i+2,j),sol(nums,i+1,j-1));
        int y=nums[j]+min(sol(nums,i,j-2),sol(nums,i+1,j-1));
        
        return t[i][j]=max(x,y);
    }
    bool PredictTheWinner(vector<int>& nums) {
        
        int n=nums.size();
        
        memset(t,-1,sizeof(t));
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int u=sol(nums,0,n-1);
        int v=sum-u;
        return u>=v;
    }
};