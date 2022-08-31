// ques - https://practice.geeksforgeeks.org/problems/print-diagonally4331/1

class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		
		int c=0;
		int t=2*(n-1);
		vector<vector<int>>v(t+1);
	
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        v[i+j].push_back(A[i][j]);
		    }
		}
		
		
		vector<int>ans;
		for(int i=0;i<v.size();i++){
		    for(int j=0;j<v[i].size();j++){
		         ans.push_back(v[i][j]);
		    }
		}
		
		return ans;
		
	}

};
