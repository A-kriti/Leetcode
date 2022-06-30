#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>m;
    string S="test string";
    
    for(char x:S){
        m[x]++;
    }
    
    for(auto x:m){
        if(x.second>1){
            cout<<x.first<<" "<<x.second<<endl;;
        }
    }
    
    return 0;
}
