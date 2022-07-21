 int t[1001][1001];
    long long sol(int arr[],int i,int j){
        if(i>j)return 0;
        if(t[i][j]!=-1)return t[i][j];
        
        int x=arr[i]+min(sol(arr,i+2,j),sol(arr,i+1,j-1));
        int y=arr[j]+min(sol(arr,i,j-2),sol(arr,i+1,j-1));
        return t[i][j]=max(x,y);
    }
    
    long long maximumAmount(int arr[], int n){
        // Your code here
        t[n][n];
        memset(t,-1,sizeof(t));
        return sol(arr,0,n-1);
    }
