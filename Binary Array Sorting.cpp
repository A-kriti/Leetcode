// ques - https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1

class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       //Your code here
      int i=0;
      int j=N-1;
       
      while(i<j){
           
          if(A[j]==0 && A[i]==1){
              swap(A[i],A[j]);
          }
          
          else if(A[i]==0)i++;
          
          else j--;
      }
       /**************
        * No need to print the array
        * ************/
    }
};
