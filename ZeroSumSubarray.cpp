//This is only function

ll findSubarray(vector<ll> arr, int n ) {
   
    ll sum=0,c=0;
    unordered_map<ll,ll>m;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            c++;
        }
        if(m.count(sum)!=0)
        {
            c+=m[sum];
        }
        m[sum]++;
    }
    return c;
}
