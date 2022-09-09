class Solution {
public:
    
    static bool cmp(vector<int>&a,vector<int>&b){

        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        
        return b[0]>a[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        // 3 2,3 6, 5 5, 6 3
        // 4 3, 1 5, 10 4
        // 1 2, 4 3, 7 3, 1 5, 1 5, 7 7, 9 7, 9 8, 3 10, 8 10
        // 1 2, 1 5, 1 5, 3 10, 4 3, 7 3, 7 7, 8 10, 9 7, 9 8
        int n=properties.size();
        
        sort(properties.begin(),properties.end(),cmp);
        
        int c=0;
       
        int x=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            
            if(properties[i][1]<x){
                c++;    
            }
            x=max(x,properties[i][1]);
        }
        
        return c;
    }
};