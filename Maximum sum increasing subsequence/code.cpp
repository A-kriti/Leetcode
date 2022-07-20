  int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int v[n];
	    v[0]=arr[0];
	    
	    int m=INT_MIN; //to store max sum 
	    
	    for(int i=1;i<n;i++){
	        v[i]=arr[i];
	        for(int j=0;j<i;j++){
    	        if(arr[i]>arr[j]){
    	            v[i]=max(v[i],arr[i]+v[j]);
    	        }
	        }
	        
	    }
	    
	    for(int i=0;i<n;i++){
	        m=max(v[i],m);
	    }
	    return m;
	}  
