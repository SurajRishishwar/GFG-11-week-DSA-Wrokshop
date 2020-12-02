//This is only Function

vector<int> subarraySum(int arr[], int n, int s){
    
    int l=0;
    int st=0;
    unsigned long long csum=0;
    bool flag=false;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        csum=csum+arr[i];
        if(csum>=s)
        {
            l=i;
            while(s<csum&&st<l)
            {
                csum=csum-arr[st];
                st++;
            }
            if(csum==s)
            {
                res.push_back(st+1);
                res.push_back(l+1);
                flag=true;
                break;
            }
        }
    }
    if(flag==false){
        res.push_back(-1);
    }
    return res;
}
