//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int w=0;
	    for(int i=0;i<n;i++){
	        w+=arr[i];
	    }
	    
	    int t[n+1][w+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=w;j++){
	            if(i==0)t[i][j]=0;
	            if(j==0)t[i][j]=1;
	        }
	    }
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=w;j++){
	            if(arr[i-1]<=j)
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            else
	                t[i][j]=t[i-1][j];
	        }
	    }
	    
	    vector<int>v;
	    for(int i=0;i<=w/2;i++){
	        if(t[n][i]==1)v.push_back(i);
	    }
	    
	    int ans=INT_MAX;
	    for(int x:v){
	        ans=min(ans,w-2*x);
	    }
	    
	    return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends