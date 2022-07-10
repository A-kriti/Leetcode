// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    
    void merge(int arr[], int l,int mid, int r){
        
        int n1=mid-l+1;
        int n2=r-mid;
        
        int v1[n1];
        int v2[n2];
        
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
        
    }
    
    void mergeSort(int arr[], int l,int r){
        
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            
            merge(arr,l,mid,r);
        }
    }
    
    
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        
        mergeSort(arr,0,n-1);
        
        long long int x=0;
        long long int y=0;
        for(int i=0;i<n;i++){
            int t=arr[i];
            if(i%2==0){
                //e+=to_string(t);
                x=x*10+t;
            }
            else{
                //o+=to_string(t);
                y=y*10+t;
            }
        }
        
        // long long int x=stoi(e);
        // long long int y=stoi(o);
        
        return x+y;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends