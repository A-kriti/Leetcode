class Solution {
public:
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ans;
        vector<string>v=strs;
        int n=strs.size();
        
        map<string,vector<int>>m;
        
        for(int i=0;i<n;i++){
            
            sort(v[i].begin(),v[i].end());
            m[v[i]].push_back(i);
            
        }
        
        for(auto x:m){
            vector<string>s;
            for(int y:x.second){
                s.push_back(strs[y]);
            }
            ans.push_back(s);
        }
        
        return ans;
    }
};


// class Solution {
// public:
    
//     bool isanagram(string s1, string s2){
//         map<char,int>m;
        
//         for(char x:s1){
//             m[x]++;
//         }
        
//         for(char x:s2){
//             m[x]--;
//         }
        
//         for(auto x:m){
//             if(x.second!=0)return false;
//         }
        
//         return true;
//     }
    
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
//         vector<vector<string>>ans;
//         int n=strs.size();
//         vector<int>vis(n,0);
        
        
//         for(int i=0;i<n;i++){
            
//             vector<string>s;
//             for(int j=i+1;j<n;j++){
//                 if(vis[i]==0 && vis[j]==0 && isanagram(strs[i],strs[j])){
//                     s.push_back(strs[j]);
//                     vis[j]=1;
//                 }
//             }
//             if(vis[i]==0)s.push_back(strs[i]);
//             vis[i]=1;
            
//             if(!s.empty())
//                 ans.push_back(s);
//         }
        
//         return ans;
//     }
// };