  vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    
	    int indegree[V]={0};
	    
	    for(int i=0;i<V;i++){
	        for(int x:adj[i]){
	            indegree[x]++;
	        }
	    }
	    
	    queue<int>q;
	    
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int temp=q.front();
	        ans.push_back(temp);
	        q.pop();
	        
	        for(int x:adj[temp]){
	            indegree[x]--;
	            if(indegree[x]==0)
	                q.push(x);
	        }
	    }
	    
	    return ans;
	}
