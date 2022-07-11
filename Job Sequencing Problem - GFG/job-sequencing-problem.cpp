// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    static bool cmp(pair<int,int>a, pair<int,int>b){
        if(a.second==b.second){
            a.first<b.first;
        }
        
        return a.second>b.second;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        vector<pair<int,int>>p;
        
        for(int i=0;i<n;i++){
            p.push_back({arr[i].dead,arr[i].profit});
        }
        sort(p.begin(),p.end(),cmp);
        
        int c=1;
        int t=p[0].second;
        int r=p[0].first;
        vector<int>v(101,0);
        v[r-1]=1;
        
        for(int i=1;i<n;i++){
            
            for(int j=p[i].first-1;j>=0;j--){
                if(v[j]==0){
                    c++;
                    t+=p[i].second;
                    v[j]=1;
                    break;
                }
            }
            
        }
        
        
        return {c,t};
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends