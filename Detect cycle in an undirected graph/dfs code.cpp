bool dfs(int s,vector<int> adj[], bool vis[],int parent){
        
        vis[s]=1;
        
        for(int u:adj[s]){
            if(vis[u]==0){
                if(dfs(u,adj,vis,s)==true)
                    return true;
            }
            
            else if(u!=parent)
                return true;
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool vis[V+1];
        for(int i=0;i<V;i++){
            vis[i]=0;
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                 if(dfs(i,adj,vis,-1)==true)
                    return true;
            }
        }
        return false;
    }
