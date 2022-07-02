class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            
            m[nums[i]]++;
        }
        
        for(auto x:m){
            
            p.push(make_pair(x.second,x.first));
            if(p.size()>k)p.pop();
            
        }
        
        vector<int>v;
        int t=0;
        while(!p.empty()){
            
            // if(t<k){
            //     v.push_back(p.top().second);
            //     p.pop();
            //     t++;
            // }
            // else{
            //    break;
            // }
                v.push_back(p.top().second);
                p.pop();
        }
        
        return v;
        
    }
};