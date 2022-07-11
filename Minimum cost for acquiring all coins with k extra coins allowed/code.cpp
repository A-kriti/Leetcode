

#include <bits/stdc++.h>

using namespace std;

int min_amount(vector<int>&v,int k){
    
    int n=v.size();
    int j=n;
    int ans=0;
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        
        if(j>=0){
            ans+=v[i];
            j-=(k+1);
        }
        else break;
    }
    
    return ans;
}

int main()
{
    // vector<int>v={5,10,20,2,100,50};
    // int k=3;
    vector<int>v={1, 2, 5, 10, 20, 50};
    int k=3;
    cout<<min_amount(v,3);

    return 0;
}
