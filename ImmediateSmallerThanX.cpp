//This is Only function

int immediateSmaller(int arr[], int n, int x)
{
     
     int diff=INT_MAX;
     int ans=-1;
     
      for(int i=0;i<n;i++)
       {
           if((arr[i]<x)&&(abs(arr[i]-x)<diff))
           {
               ans=arr[i];
               diff=abs(arr[i]-x);
           }
           
       }
    return ans;
}
