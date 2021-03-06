// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void path(vector<vector<int>> &m, int n,vector<vector<int>>&vis,int i,int j,string s,vector<string>&ans){
        
        if(i==n-1 && j==n-1 && m[i][j]==1){
            ans.push_back(s);
            return;
        }
        //down
        if(i+1<n && vis[i+1][j]!=1 && m[i+1][j]==1){
            vis[i][j]=1;
            path(m,n,vis,i+1,j,s+'D',ans);
            vis[i][j]=0;
            
        }
        //left
        if(j-1>=0 && vis[i][j-1]!=1 && m[i][j-1]==1){
            vis[i][j]=1;
            path(m,n,vis,i,j-1,s+'L',ans);
            vis[i][j]=0;
            
        }
        
        //right
        if(j+1<n && vis[i][j+1]!=1 && m[i][j+1]==1){
            vis[i][j]=1;
            path(m,n,vis,i,j+1,s+'R',ans);
            vis[i][j]=0;
            
        }
        //up
        if(i-1>=0 && vis[i-1][j]!=1 && m[i-1][j]==1){
            vis[i][j]=1;
            path(m,n,vis,i-1,j,s+'U',ans);
            vis[i][j]=0;
            
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<string>ans;
        string s="";
        if(m[0][0]==1)path(m,n,vis,0,0,s,ans);
        
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends