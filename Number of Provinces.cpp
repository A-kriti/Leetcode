// ques - https://practice.geeksforgeeks.org/problems/number-of-provinces/1

class Solution {
  public:
  
    void bfs(vector<int> adj[],int i,bool vis[]){
        
        queue<int>q;
        q.push(i);
        vis[i]=1;
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            
            for(int x:adj[temp]){
                
                    if(vis[x]==0){
                        q.push(x);
                        vis[x]=1;
                    }
                
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int c=0;
        bool vis[V+1];
        for(int i=0;i<V+1;i++){
            vis[i]=0;
        }
        
        vector<int>adj1[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                
                if(i!=j && adj[i][j]==1){
                    adj1[i].push_back(j);
                    adj1[j].push_back(i);
                }
                
            }
        }
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                c++;
                bfs(adj1,i,vis);
                
            }
        }
       
        return c;
    }
    };
