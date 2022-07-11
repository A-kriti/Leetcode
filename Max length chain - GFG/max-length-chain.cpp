// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/

bool cmp(pair<int,int>a,pair<int,int>b){
    
    if(a.second==b.second){
        return a.first<b.first;
    }
    
    return a.second<b.second;
}

int maxChainLen(struct val p[],int n)
{
//Your code here
    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++){
        v.push_back({p[i].first,p[i].second});
    }
    
    sort(v.begin(),v.end(),cmp);
    
    int t=v[0].second;
    int c=1;
    
    for(int i=1;i<n;i++){
        if(v[i].first>t){
            c++;
            t=v[i].second;
        }
    }
    
    return c;
    
}