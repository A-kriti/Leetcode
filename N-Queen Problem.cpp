// q - https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1

class Solution{
public:

    bool isbound(int r,int c, int n){
        
        if(r<0 || c<0 || r>=n || c>=n)return false;
        return true;
    }
    
    bool issafe(int r,int c,vector<vector<int>>&t, int n){
        
        for(int i=0;i<n;i++){
            if(t[r][i]==1 || t[i][c]==1)return false;
        }
        
        for(int i=0;i<n;i++){
            
            if(isbound(r-i,c-i,n) && t[r-i][c-i]==1)return false;
            if(isbound(r+i,c-i,n) && t[r+i][c-i]==1)return false;
            if(isbound(r-i,c+i,n) && t[r-i][c+i]==1)return false;
            if(isbound(r+i,c+i,n) && t[r+i][c+i]==1)return false;
        }
        
        return true;
    }
    
    void add(vector<vector<int>>&ans, vector<vector<int>>&t, int n){
        vector<int>temp;
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(t[i][j]==1) {
                       temp.push_back(j+1);
                   }
               }
           }
        ans.push_back(temp);
    }
    
    void fucn(vector<vector<int>>&ans, vector<vector<int>>&t, int n, int r){
        
        if(r==n){
            
           add(ans,t,n);
           return;
        }
        
        for(int i=0;i<n;i++){
            if(issafe(r,i,t,n)){
                t[r][i]=1;
                fucn(ans,t,n,r+1);
                t[r][i]=0;
            }
        }
        
    }
    
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<vector<int>>t(n,vector<int>(n,0));
        
        fucn(ans,t,n,0);
        return ans;
    }
};
