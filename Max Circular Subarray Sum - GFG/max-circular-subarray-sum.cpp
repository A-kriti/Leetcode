// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int kadane(int arr[],int n){
        int max_sum=INT_MIN;
        int curr_sum=0;
        
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            max_sum=max(max_sum,curr_sum);
            if(curr_sum<0)curr_sum=0;
        }
        return max_sum;
    }
    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int nonwrap=kadane(arr,num);
        
        int total_sum=0;
        for(int i=0;i<num;i++){
            total_sum+=arr[i];
            arr[i]*=-1;
        }
        
        int wrap=total_sum+kadane(arr,num);
        
        if(wrap==0)return nonwrap;
        
        return max(wrap,nonwrap);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends