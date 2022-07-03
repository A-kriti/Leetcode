#include <bits/stdc++.h>

using namespace std;

int kth_smallest(vector<int>&v,int k){
    // 1 2 3 4 5 6 7 8 (1 to 8 natural no)
    //v={1,3} & k=4;
    //in normal nautral no till n if kth smallest=k
    // but after excluding vector v each element value<=k we have to increment k otherwise break;
  
    
    for(int x:v){
        if(x<=k)
            k++;
        
        else 
            break;
    }
    
    return k;
}

int main()
{
    vector<int>v={1,2,3,8};
    int k=4;
    cout<<kth_smallest(v,k);

    return 0;
}
