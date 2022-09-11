class Solution {
public:
    int nthUglyNumber(int n) {
        
        int t[n];
        t[0]=1;
        
        int p1=0;
        int p2=0;
        int p3=0;
        
        for(int i=1;i<n;i++){
            
            int two=t[p1]*2;
            int three=t[p2]*3;
            int five=t[p3]*5;
            
            t[i]=min(two,min(three,five));
            
            if(t[i]==two)p1++;
            if(t[i]==three)p2++;
            if(t[i]==five)p3++;
        }
        
        return t[n-1];
    }
};