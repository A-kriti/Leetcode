// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int i=0,j=1,n=S.size();
        string t="";
        
        while(j<=n){
            
            if(S[i]!=S[j]){
                t+=S[i];
            }
            
            i++;
            j++;
        }
        
        //Method 2
        // for(int i=0;i<n;i++){
        //     if(S[i]!=S[i+1])t+=S[i];
        // }
        
        return t;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends