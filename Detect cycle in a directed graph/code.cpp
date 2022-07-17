   bool dfs(int s, vector<int> adj[],bool vis[],bool st[]){
        
        vis[s]=1;
        st[s]=1;
        
        for(int u:adj[s]){
            if(vis[u]==0){
                if(dfs(u,adj,vis,st))return true;
            }
            else if(st[u]==1)return true;
        }
        st[s]=0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        bool vis[V+1];
        bool st[V+1];
        for(int i=0;i<V;i++){
            vis[i]=0;
            st[i]=0;
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(i,adj,vis,st))return true;
            }
        }
       
