class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int m=0;
        int i=0;
        int j=1;
        
        while(j<n && i<n){
            
            if(prices[i]>prices[j]){
                i=j;
            }
            
            if(prices[j]-prices[i]>m){
                
                m=prices[j]-prices[i];
            }
            
            
            else j++;
            
        }
        
        return m;
    }
};