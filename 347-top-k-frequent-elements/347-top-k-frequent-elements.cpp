class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        vector<int>v;
        unordered_map<int,int>m;
        
        for(int x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            
            p.push(make_pair(x.second,x.first));
            if(p.size()>k)p.pop();
            
        }
    
        while(!p.empty()){
            
            v.push_back(p.top().second);
            p.pop();
        }
        
        return v;
        
    }
};