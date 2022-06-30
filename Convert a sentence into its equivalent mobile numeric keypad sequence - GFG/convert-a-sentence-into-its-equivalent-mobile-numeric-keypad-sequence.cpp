// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


vector<int> check_in_map(map<string,int>m, char c){
    
    int idx,num;
    for(auto x:m){
        string t=x.first;
        for(int j=0;j<t.size();j++){
            if(t[j]==c){
                idx=j;
                num=x.second;
            }
        }
    }
    return {idx,num};
}

string printSequence(string S)
{
    //code here.
    map<string,int>m={
        {"ABC",2},
        {"DEF",3},
        {"GHI",4},
        {"JKL",5},
        {"MNO",6},
        {"PQRS",7},
        {"TUV",8},
        {"WXYZ",9},
        {" ",0}
    };
    
    string h="";
    for(char x:S){
        
        vector<int>v=check_in_map(m,x);
        for(int i=0;i<=v[0];i++){
            h+=to_string(v[1]);
        }
    }
    return h;
}