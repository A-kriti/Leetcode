// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    
    
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int>p;
        
        for(int i=0;i<=r;i++){
            p.push(arr[i]);
            if(p.size()>k)p.pop();
        }
        
        return p.top();
    }
};

// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
    
//     vector<int> sort(int arr[],int n){
        
//         int c[100005];
//         vector<int>v;
        
//         for(int i=0;i<100000;i++){
//             c[i]=0;
//         }
        
//         for(int i=0;i<n;i++){
//             c[arr[i]]++;
//         }
        
//         for(int i=0;i<100000;i++){
//             if(c[i]>0){
//                 for(int j=0;j<c[i];j++){
//                     v.push_back(i);
//                 }
//             }
//         }
//         return v;
//     }
    
//     int kthSmallest(int arr[], int l, int r, int k) {
//         //code here
//         //int n=sizeof(arr)/sizeof(arr[0]);
//         vector<int>v=sort(arr,r+1);
        
//         return v[k-1];
//     }
// };

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends