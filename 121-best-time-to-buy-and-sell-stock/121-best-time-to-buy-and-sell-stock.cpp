class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int m=INT_MIN;
        int i=0;
        int j=1;
        
        while(j<n && i<n){
            
            if(prices[i]>prices[j]){
                i=j;
            }
            
            if(prices[j]-prices[i]>m){
                int t=prices[j]-prices[i];                 
                m=max(m,t);
            }
            
            
            else j++;
            
        }
        
        return (m>0)?m:0;
    }
};