//This is Only function

void convertToWave(int *arr, int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(i<n-1&&arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        if(i>0&&arr[i]<arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }
    }
    
}
