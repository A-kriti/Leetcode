// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int v[1000005];
        for(int i=0;i<1000000;i++){
            v[i]=0;
        }
        
        for(int i=0;i<size;i++){
            v[a[i]]++;
        }
        
        //int max_freq=0;
        for(int i=0;i<1000000;i++){
            
            if(v[i]>(size/2))return i;
            //max_freq=max(max_freq,v[i]);
        }
        
        return -1;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends