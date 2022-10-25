// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool check(int i,int j,string s){
        
        if(i>=j)return 1;
        if(s[i]!=s[j])return 0;
        return check(i+1,j-1,s);
    }
    int isDigitSumPalindrome(int N) {
        // code here
        int sum=0;
        while(N>0){
            sum+=(N%10);
            N=N/10;
        }
        
        string s=to_string(sum);
        int t=s.size()-1;
        return check(0,t,s);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends