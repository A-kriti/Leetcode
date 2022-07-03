// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code 
        priority_queue<long long,vector<long long>,greater<long long>>p;
        
        for(int i=0;i<n;i++){
            p.push(arr[i]);
        }
        long long ans=0;
        while(p.size()>=2){
            
            long long x=p.top();
            p.pop();
            long long y=p.top();
            p.pop();
            
            long long t=x+y;
            ans+=t;
            p.push(t);
        }
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends