// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    long long kth_smallest(long long A[], long long N,long long k){
        priority_queue<long long>p;
        
        for(int i=0;i<N;i++){
            p.push(A[i]);
            if(p.size()>k)p.pop();
        }
        
        return p.top();
    }
    
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        long long x=kth_smallest(A,N,K1);
        long long y=kth_smallest(A,N,K2);
        long long ans=0;
        long long x1=min(x,y);
        long long x2=max(x,y);
        
        
        for(int i=0;i<N;i++){
            
            if(A[i]>x1 && A[i]<x2)
                ans+=A[i];
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends