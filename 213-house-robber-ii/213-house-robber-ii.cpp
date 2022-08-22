class Solution {
public:
    
    int max_rob(vector<int>& nums){
        
        int n=nums.size();
        vector<int>v(n);
        
        if(n==1)return nums[0];
        
        if(n==2)return max(nums[0],nums[1]);
        
        v[0]=nums[0];
        v[1]=nums[1];
        v[2]=max(nums[1],nums[0]+nums[2]);
        
        for(int i=3;i<n;i++){
            
            int inc=nums[i]+max(v[i-2],v[i-3]); //include
            int exc=v[i-1];  //exclude
            v[i]=max(inc,exc);
        }
        
        return v[n-1];
        
    }
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        
        vector<int>v1(nums.begin(),nums.end()-1);   //include 1st house & exclude last house
      
        vector<int>v2(nums.begin()+1,nums.end());   // include last house & exclude 1st house
       
        
        int t1=max_rob(v1);
        int t2=max_rob(v2);
        
        return max(t1,t2);
       
    }
};