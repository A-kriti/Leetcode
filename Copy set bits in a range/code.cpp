
#include <bits/stdc++.h>

using namespace std;

int copy_setbit(int x,int y,int l,int r){
    
    if (l < 1 || r > 32)
      return 0;
      
    for(int i=l;i<=r;i++){
        int mask=1<<(i-1);  //sets ith bit
        
        if(y&mask){ //check if ith bit is set in y
            x=x|mask;  //sets ith bit in x
        }
    }
    
    return x;
    
}

int main()
{
    cout<<copy_setbit(10,13,2,3);

    return 0;
}
