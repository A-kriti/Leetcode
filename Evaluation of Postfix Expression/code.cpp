
int evaluatePostfix(string S)
    {
        // Your code here
        
        stack<int>t;
        int n=S.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            
            if(isdigit(S[i])){
                int z=S[i]-'0';
                if(t.empty()){
                    
                    t.push(z);
                }
                
                else{
                    t.push(z);
                }
            }
            
            else{
                int x=(t.top());
                t.pop();
                
                int y=(t.top());
                t.pop();
                
                int k=0;
                
                if(S[i]=='+'){
                    k=(x + y);
                }
                
                if(S[i]=='*'){
                    k=(x * y);
                }
                
                if(S[i]=='-'){
                    k=(y - x);
                }
                
                if(S[i]=='/'){
                    k=(y / x);
                }
                ans=k;
                t.push(k);
                
            }
        }
        
        return ans;
    }
