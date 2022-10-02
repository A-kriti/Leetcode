class Solution {
public:   
    
int countVowelStrings(int n) {
        
        vector<int>v(5,1);
        
        for(int i=2;i<=n;i++){
            for(int i=3;i>=0;i--){
                v[i]+=v[i+1];
            }
        }
        
        int s=0;
        for(auto x:v){
            s+=x;
        }
        return s;
    }
};


// class Solution {
// public:
    
//     int c=0;
//     bool checkif(string s){
        
//         for(int i=1;i<s.size();i++){
//             if(s[i-1]>s[i])return false;
//         }
        
//         return true;
//     }
    
//     void genrate(vector<char>v,int l,int n,string s){
        
//         if(s.size()==n){
//             if(checkif(s)==1)
//                 c++;
//             return;
//         }
        
//         for(int i=l;i<v.size();i++){
//             if(s.size()>n)return;
//             s+=v[i];
//             genrate(v,i,n,s);
//             s.pop_back();
//         }
//     }
    
//     int countVowelStrings(int n) {
        
//         vector<char>v={'a','e','i','o','u'};
//         genrate(v,0,n,"");
//         return c;
//     }
// };