//This is only Function

int findMedian(int arr[], int n, int brr[], int m){
    // code here
    int mini=0,maxi=n;
    int i,j,med;
    
    while(mini<=maxi)
    {
        i=(mini+maxi)/2;
        j=(n+m+1)/2-i;
        if(i<n&&j>0&&brr[j-1]>=arr[i])
        {
            mini=i+1;
        }
        else if(i>0&&j<m&&brr[j]<arr[i-1])
        {
            maxi=i-1;
        }
        else
        {
            if(i==0)
               med=brr[j-1];
            else if(j==0)
               med=arr[i-1];
            else
               med=max(arr[i-1],brr[j-1]);
            break;
        }
    }
    if((n+m)%2==1)
    {
        return (double)med;
    }
    if(i==n)
    {
        return (med+brr[j])/2.0;
    }
    if(j==m)
    {
        return (med+min(arr[i],brr[j]))/2.0;
    }
    return (med+min(arr[i],brr[j]))/2.0;
}
