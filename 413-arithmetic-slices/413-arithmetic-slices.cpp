class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n<3)return 0;
        int s=0,e=1, dif,sum=0,t;
        
        for(int i=1;i<n;i++){
            
            dif=nums[e]-nums[s];
            while(i+1<n && nums[i+1]-nums[i]==dif){
                e++;
                i++;
            }
            
            t=(e-s)+1;
            if(t>=3)
            sum+=((t-2)*(t+1-2))/2;
            s=e;
            e++;
        }
        
        return sum;
        
    }
    
};