//This is only Function


int transitionPoint(int arr[], int n) {

    if(arr[0])
    {
        return 0;
    }
    
    int l=0,u=n-1;
    while(l<=u)
    {
        int m=(l+u)/2;
        if(arr[m]==0)
        {
            l=m+1;
        }
        else if(arr[m]==1)
        {
            if(arr[m-1]==0){
                return m;
            }
            else{
                u=m-1;
            }
        }
    }
    return -1;
}
