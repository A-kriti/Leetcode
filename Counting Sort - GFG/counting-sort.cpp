// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int v[123];
        
        for(int i=0;i<123;i++){
            v[i]=0;
        }
        
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int t=arr[i];
            v[t]++;
        }
        
        string ans="";
        int j=0;
        for(int i=0;i<123;i++){
            
            if(v[i]>0){
                int k=0;
                char q=i;
                while(k<v[i] && j<n){
                    ans+=q;
                    k++;
                    j++;
                }
            }
            
        }
        return ans; 
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends