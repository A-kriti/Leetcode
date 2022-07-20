static bool cmp(pair<int,int>a,pair<int,int>b){
        
        if(a.second==b.second){
            return a.first<b.first;
        }
        
        return a.second<b.second;
    }
    int maxChainLen(struct val p[],int n){
        //Your code here
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back(make_pair(p[i].first,p[i].second));
        }
        
        sort(v.begin(),v.end(),cmp);
        
        
        int t[n];
        t[0]=1;
        int c=1;
        for(int i=1;i<n;i++){
            t[i]=1;
            for(int j=0;j<i;j++){
             
                if(v[i].first>v[j].second){
                    t[i]=max(t[i],t[j]+1);
                }
            }
        }
       
        
        for(int i=0;i<n;i++){
            
            c=max(c,t[i]);
        }
        
        return c;
    }
    
  //method 2
    // int maxChainLen(struct val p[],int n){
    //     //Your code here
    //     vector<pair<int,int>>v;
        
    //     for(int i=0;i<n;i++){
    //         v.push_back(make_pair(p[i].first,p[i].second));
    //     }
        
    //     sort(v.begin(),v.end(),cmp);
        
        
    //     int c=1;
    //     pair<int,int>t=v[0];
        
    //     for(int i=1;i<n;i++){
            
    //         if(v[i].first>t.second){
    //             c++;
    //             t=v[i];
    //         }
    //         else if(t.second>v[i].second){
    //             t=v[i];
    //         }
    //     }
        
    //     return c;
    // }
