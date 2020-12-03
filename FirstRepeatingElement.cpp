//This is only Function

int firstRepeated(int arr[], int n) 
{
    bool flag=false;
    int ans=-1;
    unordered_map<int,int> tm;
    
    for(int i=0;i<n;i++)
    {
        tm[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(tm[arr[i]]>1)
        {
            ans=i+1;
            break;
        }
    }
    return ans;
}
