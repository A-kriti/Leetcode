class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        //(10,1) (6,1) (5,1) (8,1)
        
        //(10,1) (6,2) (5,2) (8,1)
        
        vector<int> v;
        map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        
        for(int x:nums){
            int x1=x-1;
            int x2=x+1;
            if(m.find(x1)!=m.end())m[x]++;
            if(m.find(x2)!=m.end())m[x]++;
        }
        
        for(auto x:m){
            if(x.second==1){
                v.push_back(x.first);
            }
        }
        
        return v;
        
    }
};