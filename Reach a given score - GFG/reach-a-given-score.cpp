// { Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
long long int count(long long int n)
{
	long long int t[4][n+1],i,j;
	memset(t, -1, sizeof(t));

	vector<int>v={3,5,10};

    for(i=0;i<4;i++){
	    for(j=0;j<=n;j++){
    	    
    	    if(i==0){
    	        t[i][j]=0;
    	    }
    	    if(j==0){
    	        t[i][j]=1;
    	    }
    	    
	    }
	}
	
	for(i=1;i<4;i++){
	    for(j=1;j<=n;j++){
    	    
    	    if(v[i-1]<=j){
    	        t[i][j]=t[i][j-v[i-1]]+t[i-1][j];
    	    }
    	    else t[i][j]=t[i-1][j];
    	    
	    }
	}
	
	return t[3][n];
}

// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends