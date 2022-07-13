// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    
		    int t=s.size();
		    int n=pow(2,t);
		    
		    for(int i=0;i<n;i++){
		        string p="";
		        for(int j=0;j<t;j++){
		            if((i&(1<<j))!=0){
		                p+=s[j];
		            }
		        }
		        if(p!="")ans.push_back(p);
		    }
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends