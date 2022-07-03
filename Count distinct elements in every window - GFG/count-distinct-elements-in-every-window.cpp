// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        map<int,int>m;
        vector <int>ans;
        
        if(k==1)
       {
           vector<int>ans(n,1);
           return ans;
       }
       
        int i=0;
        int j=1;
        m[A[i]]++;
        
        while(j<n){
            
            m[A[j]]++;
            
            if(j-i+1==k) {
                ans.push_back(m.size());
                m[A[i]]--;
                if(m[A[i]]==0)m.erase(A[i]);
                i++;
                
            }
            j++;
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends