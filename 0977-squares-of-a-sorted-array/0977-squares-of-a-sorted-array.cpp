class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int>v;
        int n=nums.size();
        
        int i=0;
        int j=n-1;
        
        //for(int i=0;i<n;i++){
        while(i<=j){
            
            int l=nums[i]*nums[i];
            int r=nums[j]*nums[j];
            
            if(l>r){
                v.push_back(l);
                i++;
            }
            
            else{
                v.push_back(r);
                j--;
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
        
    }
};