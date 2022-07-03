// class Compare
// {
// public:
//     // bool operator() (Foo, Foo)
//     // {
//     //     return true;
//     // }
//     bool cmp(pair<int,int>a,pair<int,int>b){
        
//         if(a.first!=b.first)return a.first>b.first;
//         //else if(a.first<b.first)return false;
//         return(a.second>b.second)?true:false;
        
//     }
// };

class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        
        if(a.first!=b.first)return a.first<b.first;
        //else if(a.first<b.first)return false;
        return(a.second>b.second)?true:false;
        
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<pair<int,int>>p;
        unordered_map<int,int>m;
        vector<int>v;
        
        for(int x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            p.push_back({x.second,x.first});
        }
        
        sort(p.begin(),p.end(),cmp);
        for(auto x:p){
            for(int i=0;i<x.first;i++){
                v.push_back(x.second);
            }
        }
//         while(!p.empty()){
            
//             for(int i=0;i<p.top().first;i++){
//                 v.push_back(p.top().second);
//             }
//             p.pop();
//         }
        return v;
    }
};