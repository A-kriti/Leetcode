class Solution {
public:
    
//     int solve(int m,int n,int i,int j){
        
//         if(i<0 || j<0 || i>=m || j>=n)return 0;
//         if(i==0 || j==0)return 1;

//         return (uniquePaths(i+1,j) + uniquePaths(i,j+1));
        
//     }
    
//     int uniquePaths(int m, int n) {
     
//         return solve(m,n,m-1,n-1);
        
//     }
        
        
   int uniquePaths(int m, int n) {  
        int t[m][n];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0)t[i][j]=1;
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        } 
        
        return t[m-1][n-1];
    }
};