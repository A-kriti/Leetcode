// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack<int>s;
        vector<int>v(n,-1);
        
        for(int i=0;i<n;i++){
            if(s.empty())s.push(i);
            
            else{
                if(arr[i]>arr[s.top()]){
                    s.push(i);
                }
                
                else{
                    while(!s.empty() && arr[i]<arr[s.top()]){
                        v[s.top()]=arr[i];
                        s.pop();
                    }
                    s.push(i);
                }
            }
        }
        
        return v;
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends