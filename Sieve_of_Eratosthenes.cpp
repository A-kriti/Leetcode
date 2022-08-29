#include <bits/stdc++.h>

using namespace std;

void Sieve_of_Eratosthenes(int n){
    
    if(n<=1)return;
    bool isprime[n+1];
    
    for(int i=0;i<=n;i++){
        isprime[i]=1;
    }
    
    for(int i=2;i*i<=n;i++){
        
        if(isprime[i]){
            
            for(int j=2*i;j<=n;j=j+i){
               isprime[j]=0; 
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(isprime[i])
            cout<<i<<" ";
    } 
    
}

int main()
{
    int n=18;
    Sieve_of_Eratosthenes(n);
    
    return 0;
}
