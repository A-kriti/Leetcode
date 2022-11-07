//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        int t[n+1][k+1];
        
        for(int i=1;i<=n;i++){
            t[i][1]=1;
            t[i][0]=0;
        }
        
        for(int i=1;i<=k;i++){
            t[1][i]=i;
        }
        
        for(int i=2;i<=n;i++){
            for(int j=2;j<=k;j++){
                t[i][j]=INT_MAX;
                
                for(int w=1;w<=j;w++){
                    
                    int z=1+max(t[i-1][w-1],t[i][j-w]);
                    t[i][j]=min(t[i][j],z);
                }
            }
        }
        
        return t[n][k];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends