class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        
        int min_p1=INT_MAX;
        int p1=0;
        int p2=0;
        int min_p2=INT_MAX;
        
        for(int i=0;i<n;i++){
            min_p1=min(min_p1,prices[i]);
            p1=max(p1,prices[i]-min_p1);
            min_p2=min(min_p2,prices[i]-p1);
            p2=max(p2,prices[i]-min_p2);
        }
        
        return p2;
    }
};