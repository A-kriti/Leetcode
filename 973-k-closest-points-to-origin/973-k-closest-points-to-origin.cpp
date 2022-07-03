class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,vector<int>>>p;
        int n=points.size();
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            
            int e=pow(points[i][0],2)+pow(points[i][1],2); // sqrt is not applied here as after converting it to int may same int value appear!
            p.push({e,{points[i][0],points[i][1]}});
            if(p.size()>k)p.pop();
        }
        
        while(!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
        }
        
        return ans;
    }
};