class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid) {
       
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                   
                }
                if(grid[i][j]==1){
                    c++;
                }  
            }
        }
        
        int ans=0;
        
        while(!q.empty()){
            int s=q.size();
            if(c==0)return ans;
            while(s--){
                pair<int,int> temp=q.front();
                q.pop();
                int i=temp.first;
                int j=temp.second;
                
                if(i>0){
                    if(grid[i-1][j]==1){
                        c--;
                        grid[i-1][j]=2;
                        q.push({i-1,j});
                    }
                }
                
                if(j>0){
                    if(grid[i][j-1]==1){
                        c--;
                        grid[i][j-1]=2;
                        q.push({i,j-1});
                    }
                }
                
                if(i<n-1){
                    if(grid[i+1][j]==1){
                        c--;
                        grid[i+1][j]=2;
                        q.push({i+1,j});
                    }
                }
                
                if(j<m-1){
                    if(grid[i][j+1]==1){
                        c--;
                        grid[i][j+1]=2;
                        q.push({i,j+1});
                    }
                }
                
            }
            ans++;
            
        }
        
        return (c==0)?ans:-1;
        
    }
};