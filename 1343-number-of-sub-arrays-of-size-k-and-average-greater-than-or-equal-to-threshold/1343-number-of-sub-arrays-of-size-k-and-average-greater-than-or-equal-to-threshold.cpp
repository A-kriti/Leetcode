class Solution {
public:
    
    int avg(queue<int>q,int k){
        
        int c=0;
        while(!q.empty()){
            c+=q.front();
            q.pop();
        }
        
        return c/k;
    }
    
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int n=arr.size();
        int c=0;
        // 11 13 17
        queue<int>q;
        int i=0;
        int avg_sum=0;
        
        while(i<k){
            avg_sum+=arr[i];
            q.push(arr[i]);
            i++;
        }
        
        
        //t=13
        
        while(i<n){
            int t=avg_sum/k;
            if(t>=threshold){
                c++;
            }
            
            avg_sum-=q.front();
            q.push(arr[i]);
            avg_sum+=arr[i];
            q.pop();
            i++;
        }
        
        int t=avg(q,k);
        if(t>=threshold){
                c++;
        }
        
        return c;
    }
};