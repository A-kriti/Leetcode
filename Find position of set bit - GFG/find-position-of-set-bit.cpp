// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int k=0;
        int c=0;
        
        while(N>0){
            k++;
            if((N&1)==1){
                c++;
            }
            
            if(c>1)break;
            
            N=N>>1;
        }
        
        return (c==1)?k:-1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends