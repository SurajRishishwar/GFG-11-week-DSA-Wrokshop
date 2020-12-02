//This is Only function

int remove_duplicate(int a[],int n){
    if (n==0 || n==1) 
    {
        return n; 
    }
    int temp[n]; 
    int j = 0; 
    for (int i=0; i<n-1; i++) 
    {
        if (a[i] != a[i+1])
        {
            temp[j++] = a[i];
        }
    }
    temp[j++] = a[n-1]; 
 
    for (int i=0; i<j; i++) 
    {
        a[i] = temp[i]; 
    }
    return j; 
    }
