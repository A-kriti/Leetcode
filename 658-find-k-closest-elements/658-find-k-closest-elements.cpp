class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       
        priority_queue<pair<int,int>>p;
        vector<int>v;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            p.push({abs(arr[i]-x),arr[i]});
            
            if(p.size()>k){
                p.pop();
            }
        }
        
        while(!p.empty()){
            v.push_back(p.top().second);
            p.pop();
        }
        
        sort(v.begin(),v.end());
        return v;
    }
};