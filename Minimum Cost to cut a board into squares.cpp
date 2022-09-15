// ques = https://practice.geeksforgeeks.org/problems/minimum-cost-to-cut-a-board-into-squares/1

class Solution {
public:
    
    static bool cmp(int x,int y){
        return y<x;
    }
    
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        
        sort(X.begin(),X.end(),cmp);
        sort(Y.begin(),Y.end(),cmp);
        
        int h=1;
        int v=1;
        int ans=0;
        
        M--;
        N--;
        
        int i=0,j=0;
        while(i<M && j<N){
            
            if(X[i]<Y[j]){
                ans+=Y[j]*h;
                v++;
                j++;
            }
            
            else{
                ans+=X[i]*v;
                h++;
                i++;
            }
        }
        
        
        while(j<N){
            
                ans+=Y[j]*h;
                v++;
                j++;
        }
        
        
        while(i<M){
            
                ans+=X[i]*v;
                h++;
                i++;
        }
        
        return ans;
    }
};
