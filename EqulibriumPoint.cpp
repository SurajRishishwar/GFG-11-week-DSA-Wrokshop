//This is Only Function

int equilibriumPoint(long long a[], int n) {
    unsigned long long sum =0L;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    long long lsum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum-a[i];
        if(lsum==sum){
            return i+1;
        }
        lsum=lsum+a[i];
    }
    return -1;
}
