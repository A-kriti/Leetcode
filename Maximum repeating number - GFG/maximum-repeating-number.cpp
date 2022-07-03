// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    int v[k];
	    int max_fre=0;
	    for(int i=0;i<k;i++){
	        v[i]=0;
	    }
	    
	    for(int i=0;i<n;i++){
	        v[arr[i]]++;
	    }
	    
	    for(int i=0;i<k;i++){
	        max_fre=max(v[i],max_fre);
	    }
	    
	    for(int i=0;i<k;i++){
	        if(v[i]==max_fre)
	            return i;
	    }
	    
	    return 0;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends