// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    long long int ans=0;
   
    int t=n/2;
    for(int i=0;i<t;i++){
        ans+=abs(arr[n-1-i]-arr[i]);
        ans+=abs(arr[n-1-i]-arr[i+1]);
    }
    
    ans+=(arr[t]-arr[0]);
    
    return ans;
    
}