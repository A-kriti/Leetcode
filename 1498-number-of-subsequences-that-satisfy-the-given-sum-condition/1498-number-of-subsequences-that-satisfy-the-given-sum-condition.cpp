#define m 1000000007;
class Solution {
public:
    
    int power(int x,int y){
        
        if(y==0)return 1;
        if(y==1)return x;
        long ans=1;
        
        if(y%2==0){
            ans=power(x,y/2);
            ans*=ans;
        }
        
        else{
            ans=power(x,y-1);
            ans*=x;
        }
        
        return ans%m;
    }
    
    
    int numSubseq(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        
        int i=0;
        int j=n-1;
        
        while(i<=j){
            
            if(nums[i]+nums[j]<=target){
                c+=power(2,j-i);
                c%=m;
                i++;
            }
            
            else j--;
        }
        
        return c;
    }
};