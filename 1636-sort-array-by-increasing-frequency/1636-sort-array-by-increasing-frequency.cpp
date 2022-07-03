class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        
        if(a.first!=b.first)
            return a.first<b.first;
        
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

        return v;
    }
};