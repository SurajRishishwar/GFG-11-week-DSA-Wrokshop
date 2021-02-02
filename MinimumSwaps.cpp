//this is only Function

int minSwaps(int arr[], int N){
 
    int b=N;
    pair<int ,int>arrp[b];
    for(int i=0;i<b;i++)
    {
        arrp[i].first=arr[i];
        arrp[i].second=i;
    }
    sort(arrp,arrp+b);
    vector<bool> v(b,false);
    int ans=0;
    for(int i=0;i<b;i++)
    {
        if(v[i]||arrp[i].second==1)
            continue;
            
        int c=0;
        int j=i;
        while(!v[j])
        {
            v[j]=1;
            j=arrp[j].second;
            c++;
        }
        ans +=(c-1);
    }
    return ans;
}
