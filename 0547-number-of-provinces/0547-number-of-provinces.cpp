class Solution {
public:
    
    void dfs(vector<int>adj[],int i,bool vis[]){
        
        vis[i]=1;
        for(auto x:adj[i]){
            if(vis[x]==0){
                dfs(adj,x,vis);
            }
        }
            
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        bool vis[n+1];
        for(int i=0;i<n;i++){
            vis[i]=0;
        }
        
        vector<int>adj[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int c=0;
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                c++;
                dfs(adj,i,vis);
            }
        }
        
        return c;
    }
};