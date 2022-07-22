

    int t[101][101];
    int minn(int arr[],int i,int j){
        if(i==j){
            return 0;
        }
        
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
        t[i][j]=INT_MAX;
        int k;
        for(k=i;k<j;k++){
            
            int temp=minn(arr,i,k)+minn(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
            
            t[i][j]=min(t[i][j],temp);
           
        }
        return t[i][j];
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        t[N][N];
        memset(t,-1,sizeof(t));
        return minn(arr,1,N-1);
        
    }
