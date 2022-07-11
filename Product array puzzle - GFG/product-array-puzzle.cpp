// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        
        if(n==2){
            return {nums[1],nums[0]};
        }
        vector<long long int>prefix(n,0);
        vector<long long int>suffix(n,0);
        
        vector<long long int>v(n,0);
        
        long long int x=1;
        long long int y=1;
        
        for(int i=0;i<n;i++){
            x*=nums[i];
            prefix[i]=x;
            y*=nums[n-1-i];
            suffix[n-1-i]=y;
        }
        
        for(int i=1;i<n-1;i++){
            v[i]=prefix[i-1]*suffix[i+1];
        }
        
        if(prefix[0]!=0 && suffix[0]!=0){
            v[0]=suffix[0]/prefix[0];
        }
        
        if(prefix[n-1]!=0 && suffix[n-1]!=0){
            v[n-1]=prefix[n-1]/suffix[n-1];
        }
        
        return v;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends