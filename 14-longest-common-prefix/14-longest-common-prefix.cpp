class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string t=strs[0];
        int max_i=INT_MAX;
        
        for(int i=1;i<strs.size();i++){
            int n=strs[i].size();
            int y=t.size();
            int c=0;
            int j=0;
            int k=0;
            while(j<n && k<y){
                if(strs[i][j]==t[k])c++;
                else break;
                j++;
                k++;
            }
            max_i=min(c,max_i);
        }
        
        return t.substr(0,max_i);
    }
};