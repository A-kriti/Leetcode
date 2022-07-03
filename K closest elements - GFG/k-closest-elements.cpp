// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        
        if(a.first!=b.first)
            return a.first<b.first;
        
        return a.second>b.second;
    }
    
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        
        vector<pair<int,int>>p;
        vector<int>ans;
        
        for(int y:arr){
            int t=abs(y-x);
            if(t!=0)
                p.push_back({t,y});

        }
        sort(p.begin(),p.end(),cmp);
        while(k>0){
            ans.push_back(p[k-1].second);
            k--;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends