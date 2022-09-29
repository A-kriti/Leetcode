class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n=letters.size();
        
        int l=0;
        int r=n-1;
        int x=target;
        int ans=0;
        
        while(l<=r){
            
            int m=(l+r)/2;
            int k=letters[m];
            
            //if(k==x)return letters[m];
            
            if(k>x){
                ans=m;
                r=m-1;
            }
            
            else l=m+1;   
        }
        
        //if(ans=-1)return letters[0];
        return letters[ans];
    }
};