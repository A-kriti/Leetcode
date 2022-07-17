
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        bool visited[V+1];
        
        for(int i=0;i<V+1;i++){
            visited[i]=0;
        }
        
        queue<int>q;
        q.push(0);
        visited[0]=1;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(int v:adj[temp]){
                if(visited[v]==0){
                    visited[v]=1;
                    q.push(v);
                }
            }
        }
        return ans;
    }
