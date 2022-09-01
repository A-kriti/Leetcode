class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        //  1 2 3 3 4 1
        
        // 1 2 3 4
        
        //4
        //3
        //2
        
        
        //1  1 2  1 2 3  2 3 4
        
        int n=nums.size();
        set<int>s;
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }   
        
        
        //int n=nums.size();
        
        int m1=INT_MIN;
        for(int i=0;i<n;i++){
            m1=max(m1,nums[i]);
        }
        
        int m2=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]!=m1){
                m2=max(m2,nums[i]);
            }
        }
        
        int m3=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]!=m1 && nums[i]!=m2){
                m3=max(m3,nums[i]);
            }
        }
        
        if(s.size()<=2)return m1;   
        
        // 1 2 2 2
        //m1=2
        //m2=1
        //if(m3==INT_MIN && m1!=INT_MIN)return m1;
        //if(m2==INT_MAX && m1!=INT_MIN)return m1;
        return m3;
        
        
    }
};