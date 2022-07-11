#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>&v,int l,int r){
    
    int i=l-1;
    int pvt=r-1;
    
    for(int j=l;j<r-1;j++){
        if(v[j]<v[pvt]){
            i++;
            swap(v[i],v[j]);
        }
    }
    
    swap(v[i+1],v[pvt]);
    return i+1;
    
}

void QuickSort(vector<int>&v,int l,int r){
    
    if(l<r){
        int p=partition(v,l,r);
        QuickSort(v,l,p-1);
        QuickSort(v,p+1,r);
    }
}

int max_height(vector<int>&v){
    
    int c=0;
    int n=v.size();
    int j=1;
    
    QuickSort(v,0,n);
    
    for(int i=1;i<n;i++){
        
        if(j<n){
            c++;
            j+=i;
        }
        
        else break;
        
    }
    return c;
}

int main()
{
    
    vector<int>v={10,20,30,50,60,70};
    // vector<int>v={20,30};
    // vector<int>v={40, 100, 20, 30};
    cout<<max_height(v);

    return 0;
}
