// ques - https://practice.geeksforgeeks.org/problems/unsorted-array4925/1

int findElement(int arr[], int n) {
    
    int ml=INT_MIN;
    int mr=INT_MAX;
    int max_l[n];
    int min_r[n];
    
   for(int i=0;i<n;i++){
       ml=max(ml,arr[i]);
       max_l[i]=ml;
       
       mr=min(mr,arr[n-i-1]);
       min_r[n-i-1]=mr;
   }
   
   for(int i=1;i<n-1;i++){
       if(max_l[i]==min_r[i]){
           return max_l[i];
       }
   }
   
   return -1;
}
