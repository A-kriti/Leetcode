class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        int i=0;
        int m=INT_MAX;
        int ans=INT_MIN;
        
        while(i<n){
            
            m=min(m,prices[i]);
            ans=max(ans,prices[i]-m);
            i++;
            
        }
      
        return (ans>0)?ans:0;
    }
};