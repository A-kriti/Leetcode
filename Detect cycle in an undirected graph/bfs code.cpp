bool bfs(int s, vector<int> adj[],bool vis[]){
        
        queue<pair<int,int>>q;
        q.push({s,-1});
        
        while(!q.empty()){
            int t=q.front().first; //current node
            int y=q.front().second; //current node parent
            vis[t]=1;
            q.pop();
            for(int u:adj[t]){
                if(vis[u]==0){
                    vis[u]=1;
                    q.push({u,t});
                }
                else if(vis[u]==1 && u!=y)return true;
            }
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
                if(bfs(i,adj,vis))return true;
            }
        }
        return false;
    }
