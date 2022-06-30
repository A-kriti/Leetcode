// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // void binarysort(long long *a, int n){
        
    //     //  for(int i=0;i<n;i++){
    //     //       for(int j=i+1;j<n;j++){
    //     //           if(a[i]>a[j]){
    //     //               swap(a[j],a[i]);
    //     //           }
    //     //       }
    //     //  }
        
    //     for(int i=1;i<n;i++){
    //     int curr=a[i];
    //     int j=i-1;
    //     while(a[j]>curr && j>=0){
    //         a[j+1]=a[j];
    //         j--;
    //     }
        
    //     a[j+1]=curr;
    //     }
    // }
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        // binarysort(a,n);
        // binarysort(b,n);
        
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]+b[n-1-i]<k)return false;
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends