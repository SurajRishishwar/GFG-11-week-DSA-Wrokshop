//This is only function

int trappingWater(int arr[], int n)
{
    int water=0,left_max=0,right_max=0,low=0,high=n-1;
    while(low<high)
    {
        if(arr[low]<arr[high])
        {
            if(arr[low]>left_max)
            {
                left_max=arr[low];
            }
            else
            {
                water=water+left_max-arr[low];
                low++;
            }
        }
        else
        {
            if(arr[high]>right_max)
            {
                right_max=arr[high];
            }
            else
            {
                water=water+right_max-arr[high];
                high--;
            }
        }
    }
    return water;
}
