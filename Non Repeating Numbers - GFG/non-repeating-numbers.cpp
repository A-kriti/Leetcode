// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xor_sum=0;
        for(int i=0;i<nums.size();i++){
            xor_sum^=nums[i];
        }
        
        //Xor
        //00 ->0 
        //01 ->1
        //10 ->1
        //11 ->0
        
        int r1=0;
        int r2=0;
        
        int y=xor_sum & ~(xor_sum-1); //gives right most set bit
        
        for(int i=0;i<nums.size();i++){
            
            if((nums[i]&y)!=0){
                r1^=nums[i];
            }
            
            else r2^=nums[i];
        }
        if(r1>r2)return {r2,r1};
        return {r1,r2};
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends