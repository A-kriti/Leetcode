    
    vector<int>ans;
    void dfs(int s, vector<int> adj[], bool vis[]){
        
        vis[s]=1;
        ans.push_back(s);
        
        for(int u:adj[s]){
            if(vis[u]==0){
                dfs(u,adj,vis);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+1];
        for(int i=0;i<V+1;i++){
            vis[i]=0;
        }
        
        dfs(0,adj,vis);
        return ans;
    }
