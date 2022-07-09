
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long int n=A.size();
    long long int sum=0;
    long long int sum1=0;
    long long int sumq=0;
    long long int sumq1=0;
    int d;
    int m;
    for(int i=0;i<n;i++){
        sum+=(long long int)A[i];
        sumq+=(long long int)pow(A[i],2);
    }
    
    for(int i=1;i<=n;i++){
        sum1+=(long long int)i;
        sumq1+=(long long int)pow(i,2);
    }
    
    long long int difof2=(sum1-sum);
    long long int difq=(sumq1-sumq);
    long long int sumof2=difq/difof2;
    
    
        
        m=(difof2+sumof2)/2;
        d=(sumof2-difof2)/2;
    
    
    
    return {d,m};
}
