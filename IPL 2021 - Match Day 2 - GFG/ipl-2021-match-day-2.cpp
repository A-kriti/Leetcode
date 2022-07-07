// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        // priority_queue<int>p;
        // vector<int>ans;
        
        // for(int x:arr){
        //     p.push(x);
        //     if(p.size()==k){
        //         ans.push_back(p.top());
        //         p.pop();
        //     }
            
        // }
        
        if(k==1)return arr;
        if(n<=k){
            int t=*max_element(arr.begin(),arr.end());
            return {t};
        }
        vector<int>ans;
        list<int>l;
        int i=0;
        int j=0;
        //v.push_back(arr[i]);
        int max_el=arr[i];
        
        while(j<n){
            
            while(l.size()>0 && l.back()<arr[j]){
                l.pop_back();
            }
            l.push_back(arr[j]);
            
            // max_el=max(max_el,arr[j]);
            // v.push_back(arr[j]);
            
            if(j-i+1==k){
                //max_el=*max_element(v.begin()+i,v.begin()+j+1);
                ans.push_back(l.front());
                if(l.front()==arr[i]){
                    
                    // int k=v.size();
                    // while(k--){
                    //     max_el=max(max_el,arr[k]);
                    // }
                    l.pop_front();
                }
                // else if(!v.empty()){
                //     v.erase(v.begin()+i);
                // }
                //v.erase(v.begin()+i);
                i++;
            }
            j++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends