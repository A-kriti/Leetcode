// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[], long long l,long long mid,long long r){
        
        long long int inversion=0;
        long long n1=mid-l+1;
        long long n2=r-mid;
        
        long long v1[n1];
        long long v2[n2];
        
        for(int i=0;i<n1;i++){
            v1[i]=arr[l+i];
        }
        
        for(int i=0;i<n2;i++){
            v2[i]=arr[mid+1+i];
        }
        
        int i=0;
        int j=0;
        int k=l;
        
        while(i<n1 && j<n2){
            
            if(v1[i]>v2[j]){
                arr[k]=v2[j];
                inversion+=(n1-i);
                k++;
                j++;
            }
            
            else{
                arr[k]=v1[i];
                k++;
                i++;
            }
        }
        
        while(i<n1){
           
                arr[k]=v1[i];
                k++;
                i++;
            
        }
        
        while(j<n2){
            
                arr[k]=v2[j];
                k++;
                j++;
            
        }
        
        return inversion;
    }
    
    long long int mergeSort(long long arr[], long long l,long long r){
        
        long long int inversion=0;
        if(l<r){
            int mid=(l+r)/2;
            inversion+=mergeSort(arr,l,mid);
            inversion+=mergeSort(arr,mid+1,r);
            
            inversion+=merge(arr,l,mid,r);
        }
        
        return inversion;
    }

    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int ans =mergeSort(arr,0,N-1);
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends